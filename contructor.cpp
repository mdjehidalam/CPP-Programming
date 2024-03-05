#include<iostream>
using namespace std;
class student
{
    int age;
    int rollNo;
    public: 
    /// create defualt constructor 
    // constructor automatically calling 
    student()
    {
        cout<<"constructor is called"<<endl;
        age=0;
        rollNo=0;
        cout<<"Enter your age : "<<flush;
        cin>>age;
        cout<<"Enter your Roll No : "<<flush;
        cin>>rollNo;
    }
    void display()
    {
        cout<<"age: "<<age<<endl;
        cout<<"Roll No : "<<rollNo<<endl;
    }
    
};
int main()
{
    student s1,s2,s3;
    s1.display();
    cout<<"s2 properties "<<endl;
    s2.display();
    
}