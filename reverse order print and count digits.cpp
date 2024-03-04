#include<iostream>
using namespace std;
int main()
{
    int n,i,reverse=0;
    cout<<"enter any number for reverse order print=";
    cin>>n;
    for(i=0;n>0;i++)
    {
        int lastdigits =n%10;
        reverse = reverse*10+lastdigits;
        n=n/10;
    }
    cout<<"reverse order print = "<<reverse<<endl;
    cout<<"enter any number for couting digits = ";
    cin>>n;
    
    for(i=0;n>0;i++)
    {
        n=n/10;
    }
    cout<<"number of digits = "<<i<<endl;
    return 0;
}
