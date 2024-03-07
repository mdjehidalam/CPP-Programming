// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void SelectionSort(int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        int smallest=i;
        for(int j=i; j<n; j++)
        {
            if(a[j]<a[smallest])// if a[i] less than a[smallest] than swap of them
            swap(a[j],a[smallest]);
        }
    }
}
int main() {
    int n; //size of array
    cin>>n; // input n from user 
    int a[n]; // create n size of array
    // input array elemets 
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    SelectionSort(a,n);//function calling
    
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "; 
    }
    return 0;
}

// output: 
/*
5
5 3 2 1 4
1 2 3 4 5 
*/
