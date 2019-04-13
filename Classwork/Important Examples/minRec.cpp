#include<iostream>
using namespace std;
double min(double* arr,int n) {
    double subArrayMin;
    if(n == 1) {
        return arr[0];
    }
    subArrayMin=min(arr,n-1);
    if(subArrayMin<arr[n-1]){
        return subArrayMin;
    }
    return arr[n-1];
}
int main(){
    int n=5;
    double arr[20];
    for(int i=0;i<n;i++){
        arr[i] =i+1;
    }
    cout<<min(arr,n)<<endl;
    return 0;
}