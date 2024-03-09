 
#include <iostream>
using namespace std;
int main() {
      int a[]={1, 4, 3, 1, 3, 5};
      int size=sizeof(a)/sizeof(0);// obtain size of array
      
      int d[size];//create array for store dublicate elements of array 
      int count=0;
     
      for(int i=0; i<size; i++)
      {
          for(int j=i+1; j<size;j++)
          {
              if(a[i]==a[j])
              {
                  d[count]=a[i];//store dublicate elements of array of a;
                  count++;
              }
          }
      }
     
      for(int i=0; i<count; i++)
      {
          cout<<d[i]<<" ";//printing dublicate elements of array
      }

    return 0;
}
