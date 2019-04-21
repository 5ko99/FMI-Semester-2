#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
using namespace std;

struct  Matrix
{
    float n00,n01,n10,n11;
    float det;
    char name[11];
    Matrix(float, float, float, float, char[11]);
};
Matrix::Matrix(float n00=0,float n01=0,float n10=0,float n11=0,char name[11]=""){
    this->n00=n00;
    this->n01=n01;
    this->n10=n10;
    this->n11=n11;
    strcpy(this->name,name);
    this->det=this->n00*this->n11-this->n01*this->n10;
}

//Functions
void printM(short n){
    ifstream f;
    f.open("matrices.bin",ios::binary | ios::in);
    f.seekg(n*sizeof(Matrix));
    Matrix mtrx;
    f.read((char*)&mtrx,sizeof(Matrix));
    printf("%.2f %.2f %.2f %.2f %s %.2f \n",mtrx.n00,mtrx.n01,mtrx.n10,mtrx.n11,mtrx.name,mtrx.det);
    f.close();
}
void deleteM(short n){
    ofstream f;
    f.open("matrices.bin", ios::binary | ios::ate | ios::in);
    f.seekp(n*sizeof(Matrix));
    Matrix mtrx;
    f.write((char*)&mtrx,sizeof(Matrix));
    f.close();
}
void updateM(short n,float a, float b, float c, float d, char name[11]){
    ofstream f;
    f.open("matrices.bin",ios::binary|ios::ate|ios::in);
    Matrix m(a,b,c,d,name);
    f.seekp(n*sizeof(Matrix));
    f.write((char*)&m,sizeof(Matrix));
    f.close();
}
void inverseM(short n){
    Matrix mtrx;
    ifstream f;
    f.open("matrices.bin",ios::binary | ios::in);
    f.seekg(n*sizeof(Matrix));
    f.read((char*)&mtrx,sizeof(Matrix));
    f.close();
    ofstream of;
    if(mtrx.det!=0){
        of.open("matrices.bin",ios::binary | ios::ate | ios::in);
        mtrx.n00=mtrx.n00/mtrx.det;
        mtrx.n01=(-mtrx.n01)/mtrx.det;
        mtrx.n10=(-mtrx.n10)/mtrx.det;
        mtrx.n11=mtrx.n11/mtrx.det;
        of.seekp(n*sizeof(Matrix));
        of.write((char*)&mtrx,sizeof(Matrix));
        of.close();
    }else{
        cerr<<"Matrix Det is zero!"<<endl;
        return;
    }
}
void sumM(short n, short m){
    Matrix mtrx1;
    Matrix mtrx2;
    ifstream f;
    f.open("matrices.bin", ios::binary | ios::in);
    f.seekg(n*sizeof(Matrix));
    f.read((char*)&mtrx1,sizeof(Matrix));
    f.seekg(m*sizeof(Matrix));
    f.read((char*)&mtrx2,sizeof(Matrix));
    f.close();
    printf("%.2f %.2f %.2f %.2f %s+%s \n",mtrx1.n00+mtrx2.n00, mtrx1.n01+mtrx2.n01,
     mtrx1.n10+mtrx2.n10,mtrx1.n11+mtrx2.n11,mtrx1.name,mtrx2.name);
}
void multiplyM(short n, short m){
    Matrix mtrx1;
    Matrix mtrx2;
    ifstream f;
    f.open("matrices.bin", ios::binary | ios::in);
    f.seekg(n*sizeof(Matrix));
    f.read((char*)&mtrx1,sizeof(Matrix));
    f.seekg(m*sizeof(Matrix));
    f.read((char*)&mtrx2,sizeof(Matrix));
    f.close();
    float a = mtrx1.n00*mtrx2.n00+mtrx1.n01*mtrx2.n10;
    float b = mtrx1.n00*mtrx2.n01+mtrx1.n01*mtrx2.n11;
    float c = mtrx1.n10*mtrx2.n00+mtrx1.n11*mtrx2.n10;
    float d = mtrx1.n10*mtrx2.n01+mtrx1.n11*mtrx2.n11;
    printf("%.2f %.2f %.2f %.2f %s*%s \n",a, b,c,d,mtrx1.name,mtrx2.name);
}


int main(){
    fstream f;
    f.open("matrices.bin",ios::binary | ios::out);
    if(!f){
        cerr<<"Error with file!";
    }
    short n;
    cin>>n;
    Matrix mtrx;
    //Temp Variables
    int arr[4];
    char str[11];
    //Input and writing to file
    for(int i=0;i<n;i++){
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        cin.ignore();
        cin.getline(str,10);
        mtrx=Matrix(arr[0],arr[1],arr[2],arr[3],str);
        f.write((char*)&mtrx,sizeof(Matrix));
    }
    f.close();
    bool flag=true;
    char cmd[41];
    char tmpName[11];
    int tmp[4];
    short ind1,ind2;
    do{
        //cin.ignore();
        cin.getline(cmd,40,' ');
        if(!strcmp("exit",cmd)){
            flag=false;
        }
        if(!strcmp("print",cmd)){
            cin>>ind1;
            printM(ind1);
            cin.ignore();
            continue;
        }
        if(!strcmp("delete",cmd)){
            cin>>ind1;
            deleteM(ind1);
            cin.ignore();
            continue;
        }
        if(!strcmp("update",cmd)){
            cin>>ind1;
            cin>>tmp[0];
            cin>>tmp[1];
            cin>>tmp[2];
            cin>>tmp[3];
            cin.ignore();
            cin.getline(tmpName,10);
            //cout<<ind1<<tmp[0]<<tmpName;
            updateM(ind1,tmp[0],tmp[1],tmp[2],tmp[3],tmpName);
            continue;
        }
        if(!strcmp("inverse",cmd)){
            cin>>ind1;
            inverseM(ind1);
            cin.ignore();
            continue;
        }
        if(!strcmp("add",cmd)){
            cin>>ind1;
            cin>>ind2;
            sumM(ind1,ind2);
            cin.ignore();
            continue;
        }
        if(!strcmp("multiply",cmd)){
            cin>>ind1;
            cin>>ind2;
            multiplyM(ind1,ind2);
            cin.ignore();
            continue;
        }
    }while(flag);
    return 0;
}