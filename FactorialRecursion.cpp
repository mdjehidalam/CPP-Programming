#include<bits/stdc++.h>
using namespace std ; 
int Fact(int n)
{
    //first step--> base case 
    if(n==0){return 1;}
    if(n<0){ return -1;}
    // Second step --> Assumption or Recursive case
    int SmallAns=Fact(n-1);
    // Third Step --> Calculation 
    return n* SmallAns; 
}
int main()
{
    cout<<Fact(4)<<endl;
    return 0;
}