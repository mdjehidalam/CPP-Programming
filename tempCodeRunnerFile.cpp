#include<iostream>
using namespace std;
class student
{ 
    int age ;
    int rollNo;
    public : 
    student( int a, int r)
    {
        age=a;
        rollNo=r;
    }
    void display()
    {
        cout<<"age : "<<age<<endl;
        cout<<"rollNo: "<<rollNo<<endl;
    }
    ~student() /// destructor 
    {
        cout<<"destructor is called "<<endl;
    }
};
int main()
{
    student s1(20,45),s2(10,200);
    student *s4=new student ( 50,500);
    cout<<"s1: "<<endl;
    s1.display();
    cout<<"s2: "<<endl;
    s2.display();