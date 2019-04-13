#include  <iostream>
using namespace std;
struct  Book
{
    char name[31];
    char* author;
};
struct  Student
{
    int fn;
    Book* studentBook;
};
int main(){
    Student* studentList[30];
    Book bk;
    cin.getline(bk.name,30);
    bk.author="Author Name";
    Student st;
    st.fn=12345;
    st.studentBook=&bk;
    studentList[0] = &st;
    cout<<studentList[0]->studentBook->author<<endl;
    cout<<studentList[0]->studentBook->name<<endl;
    return 0;
}
