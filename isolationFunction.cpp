#include<iostream>
#include"class.cpp"
using namespace std;
int main()
{
    // creating object statically
    // syntax: class_name object_name ;
    student s1;
    student s2;
    student s3,s4,s5;
    // creating object dynamically
    // syntax:  class_name *object_name = new class_name;
    // new --> keyword
    student *s6=new student;

    // Access Object Properties statically
    // syntax : object_name.property_name;
    s1.age=10;
    s1.rollNO=56;
    cout<<"s1.age : "<<s1.age<<endl;
    cout<<"s1.rollNO : "<<s1.rollNO<<endl;
    // Access object Properties dynamically
    // syntax : (*object_name).object_properties_name 
    //    or  object_name->Object_properties_name
    (*s6).age=45;
    (*s6).rollNO=378;
    cout<<"dy age: "<<(*s6).age<<endl;
    cout<<"dy rollNO : "<<(*s6).rollNO<<endl;
/////////////////////
s6->age=70;
s6->rollNO=89;
cout<<"age-> "<<s6->age<<endl;
cout<<"rollno -> "<<s6->rollNO<<endl;
return 0;
}
