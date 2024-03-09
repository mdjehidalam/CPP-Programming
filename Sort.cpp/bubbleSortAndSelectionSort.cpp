 
#include <iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    for(int i=0; i<n ;i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
}

void selectionSort(int a[],int n)
{
    for(int i=0; i<n ; i++)
    {
        int smallest=i;
        for(int j=i+1; j<n ; j++)
        {
            if(a[smallest]>a[j])
            smallest=j;
        }
        swap(a[i],a[smallest]);
         
    }
}
int main() {
      int n;
      cin>>n ; // taking input form User 
      int a[n]; // creating array of a size of n
      
      for(int i=0; i<n ;i++)
      {
          cin>>a[i]; // taking input elements of array a from User
      }
      //bubbleSort(a,n);
      selectionSort(a,n);
      for(int i=0; i<n ; i++)
      {
          cout<<a[i]<<" ";
      }
    return 0;
}
