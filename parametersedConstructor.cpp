#include<iostream>
using namespace std;
class student {
    int age;
    int rollNo;
    public: 
    student(int a, int r)  /// parameterised constructor
    {
        age=a;
        rollNo=r;
    }
    void display()
    {
        cout<<"age: "<<age<<endl;
        cout<<"Roll No : "<<rollNo<<endl;
    }
};
int main()
{
    // parameterised constructor creating object at the same time have to give parameters or arguments
    student s1(34,578);
    s1.display();
    return 0;
}