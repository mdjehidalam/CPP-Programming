#include<iostream>
using namespace std;
void print(int arr[][7],int r,int c)
{
    for(int i=0 ; i<r; i++)
    {
        for( int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[][7]={
        {1,3,5,6},
        {3,7},
        

    };
    print(arr,6,7);
    return 0;
}
