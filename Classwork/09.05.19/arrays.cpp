#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Arr{
private:
    int len;
    T* arr;
    void copyArr(const int,const T*);
    void deleteArr();
public:
    Arr(const int);
    Arr(const Arr&);
    ~Arr();
    Arr& operator=(const Arr&);
    T& operator[](int);
    bool operator<(const Arr&);
    bool operator>(const Arr&);
    bool operator==(const Arr&);
    friend ostream& operator<<(ostream&,const Arr<T>&);
    friend istream& operator>>(istream&, const Arr<T>&);
};
template <typename T>
void Arr<T>::copyArr(const int len,const T* arr){
    this->len=len;
    this->arr=new T[len];
    for(int i=0;i<len;i++){
        this->arr[i]=arr[i];
    }
}
template <typename T>
void Arr<T>::deleteArr(){
    len=0;
    delete[] arr;
}
template <typename T>
Arr<T>::Arr(const int len){
    this->len=len;
    this->arr=new T[len];
}
template <typename T>
Arr<T>::~Arr(){
    deleteArr();
}
template <typename T>
Arr<T>::Arr(const Arr& arr){
    copyArr(arr,arr.len);
}
template <typename T>
Arr<T>& Arr<T>::operator=(const Arr& arr){
    deleteArr();
    copyArr(arr,arr.len);
}
template <typename T>
T& Arr<T>::operator[](int n){
    return this->arr[n];
}
template <typename T>
bool Arr<T>::operator<(const Arr& arr){
    if(this->len<arr.len) return true;
    else return false;
}
template <typename T>
bool Arr<T>::operator>(const Arr& arr){
    if(this->len>arr.len) return true;
    else return false;
}
template <typename T>
bool Arr<T>::operator==(const Arr& arr){
    if(this-len==arr.len) return true;
    return false;
}
template <typename T>
ostream& operator<<(ostream& os, const Arr<T>& a){
    for(int i=0;i<a.arr.len();i++){
        os<<a.arr[i];
    }
    os<<endl;
    return os;
}
template <typename T>
istream& operator>>(istream& is, const Arr<T>& a){
    for(int i=0;i<a.arr.len();i++){
        is>>a.arr[i];
    }
    return is;
}
int main()
{
  Arr<string> arr(2);
  arr[0]="Ivan";
  cin>>arr[1];
  cout<<arr[1];
  cout<<arr[0];

return 0 ;
}
