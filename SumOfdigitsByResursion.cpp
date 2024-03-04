#include<bits/stdc++.h>
using namespace std; 
int SumOfDigits(int n)
{
    // base case its Meaning condition of program Stop
    if(n==0){return 0;}// this Return is Mandatory;
    //Recursive case 
    int Num=SumOfDigits(n-1);
    int add=n+Num;
    return add;
}
int main()
{ 
    cout<<SumOfDigits(23);
}