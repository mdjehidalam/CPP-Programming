#include<iostream>
using namespace std;
class complexNumber{
    private: 
    int real, imaginary;
    public: 
    complexNumber(int real, int imaginary)
    {
        this->real=real;
        this->imaginary= imaginary;
    }
    void add(complexNumber c2)
    {
        int tempreal=this->real+c2.real;
        int tempima=this->imaginary+c2.imaginary;
        this->real=tempreal;
        this->imaginary=tempima;
    }
    void display()
    {
        cout<<this->real<<"+ "<<this->imaginary<<"i"<<endl;
    }

};
int main(){
    complexNumber c1(2,4),c2(3,6);
    c1.display();
    c2.display();
    c1.add(c2);
    cout<<"c1 + c2 : "<<flush;
    c1.display();
    return 0;
}