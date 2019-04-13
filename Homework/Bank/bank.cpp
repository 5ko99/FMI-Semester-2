#include <iostream>
#include <cstring>
using namespace std;
class BankAccount{
    //Name, iban,balance,deposit,withdraw,ifno
    char* name;
    char* iban;
    float balance;
    public:
    BankAccount(char*,char*,float);
    BankAccount(const BankAccount&);
    BankAccount& operator=(const BankAccount&);
    ~BankAccount();
    friend ostream& operator<<(ostream&,const BankAccount&);

    void deposit(float);
    void withdraw(float);
    char* getIban();
};
BankAccount::BankAccount(char* name="NULL", char* iban="NULL", float balance=-1){
    this->name=new char[strlen(name)+1];
    this->iban=new char[strlen(iban)+1];
    strcpy(this->name,name);
    strcpy(this->iban,iban);
    this->balance=balance;
}
BankAccount::BankAccount(const BankAccount& b){
    this->name=new char[strlen(b.name)+1];
    this->iban=new char[strlen(b.iban)+1];
    strcpy(this->name,b.name);
    strcpy(this->iban,b.iban);
    this->balance=b.balance;
}
BankAccount& BankAccount::operator=(const BankAccount& b){
    if(this!=&b){
        delete[] this->name;
        delete[] this->iban;
        this->name=new char[strlen(b.name)+1];
        this->iban=new char[strlen(b.iban)+1];
        strcpy(this->name,b.name);
        strcpy(this->iban,b.iban);
        this->balance=b.balance;
    }
    return *this;
}
BankAccount::~BankAccount(){
        delete[] this->name;
        delete[] this->iban;
}
void BankAccount::deposit(float sum){
    this->balance+=sum;
    cout<<"Deposited "<<sum<<"Leva"<<endl;
}
void BankAccount::withdraw(float sum){
    if(this->balance-sum>=0){
        this->balance-=sum;
        cout<<"Withdraw "<<sum<<"Leva. "<<"Now you have:"<<this->balance<<"Leva."<<endl;
    }else{
        cerr<<"Your don't have enough money!"<<endl;
    }
}
 ostream& operator<<(ostream& os,const BankAccount& b){
    os<<"Name:"<<b.name<<"\n IBAN:"<<b.iban<<"\n Balance:"<<b.balance<<endl;
    return os;
}
char* BankAccount::getIban(){
    return this->iban;
}

//New Class Bank
class Bank{
    //Functions: Add ba, output for all ba, does exist by iban
    BankAccount ba[500];
    int len;
    public:
    Bank(BankAccount*,int);
    void add(BankAccount&);
    void output();
    bool check(char* iban);
};
Bank::Bank(BankAccount ba[500]={},int len=0){
    for(int i=0;i<len;i++){
        this->ba[i]=ba[i];
    }
    this->len=len;
}
void Bank::add(BankAccount& ba){
    this->len++;
    this->ba[this->len-1]=ba;
}
void Bank::output(){
    for(int i=0;i<this->len;i++){
        cout<<i+1<<". "<<(this->ba[i]);
    }
}
bool Bank::check(char* iban){
    for(int i=0;i<len;i++){
        if(!strcmp(ba[i].getIban(),iban)) return true;
    }
    return false;
}
int main(){
    char name[] = "Petko";
    char iban[] = "1235";
    float balance = 20;
    BankAccount b(name,iban,balance);
    BankAccount b2=b;
    b.deposit(25);
    //cout<<b;
    //cout<<b2;
    BankAccount arr[2]={b,b2};
    Bank bank(arr,2);
    bank.add(b);
    bank.add(b2);
    cout<<endl;
    cout<<bank.check("1235")<<endl;
    bank.output();
    // cout<<*(b.balance)<<endl;
    // cout<<*(b2.balance)<<endl;
    // cout<<(b.balance)<<endl;
    // cout<<(b2.balance)<<endl;
    return 0;
}