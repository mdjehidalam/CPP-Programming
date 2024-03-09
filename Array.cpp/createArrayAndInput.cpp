// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
     int n;
     cin>>n; // taking n from user 
     int a[n];// create an array size of n;
     
     for(int i=0; i<n ; i++)
     {
         cin>>a[i];// taking input from user 
     }
     for(int i=0; i<n ; i++)
     {
         cout<<a[i]<<" ";// print array
     }

    return 0;
}
