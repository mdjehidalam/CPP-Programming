
#include<iostream>
using namespace std;

void merge(int *a,int s,int e){
    int mid = (s+e)/2;
    
    int i = s;
    int j = mid+1;
    int k = s;
    
    int temp[100];
    
    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++]  = a[j++];
    }
    
    //We need to copy all element to original arrays
    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }
    
    
}

void mergeSort(int a[],int s,int e){
  //s-->start e-->end
    //Base case - 1 or 0 elements
    if(s>=e){
        return;
    }
    
    //Follow 3 steps
    //1. Divide
    int mid = (s+e)/2;
    
    //Recursively the arrays - s,mid and mid+1,e
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    
    //Merge the two parts
    merge(a,s,e);

}
int main()
{
    int a[]={5,1,3,2,4};
    mergeSort(a,0,5);
    for(int i=0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
//output: 1 2 3 4 5
