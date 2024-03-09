 
#include <iostream>
using namespace std;
int main() {
      int n;
      cin>>n ; // taking input form User 
      int a[n]; // creating array of a size of n
      
      for(int i=0; i<n ;i++)
      {
          cin>>a[i]; // taking input elements of array a from User
      }
      
      for(int i=0; i<n ; i++)
      {
          for(int j=i+1; j<n ; j++)
          {
              if(a[i]==a[j])
              {
                  for(int k=j; k<n ; k++)
                  {
                      a[k]=a[k+1];//element shift k to k+1 (right to left)
                      j--;
                      n--;// decreasing size of array;
                  }
              }
          }
      }
      
      for(int i=0; i<n ; i++)
      {
          cout<<a[i]<<" ";
      }
    return 0;
}
