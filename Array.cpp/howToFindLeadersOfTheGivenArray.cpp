 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n; 
     cin>>n; // taking input from user 
     int a[n]; // creating array size of n
     for(int i=0; i<n ;i++)
     {
         cin>>a[i];
     }
    int leader[n];//create array for store leader elements
    int count=0;
    leader[count]=a[n-1];
    int temLeader=a[n-1];
    for(int i=n-2; i>=0 ; i--)
    {
        if(temLeader<a[i])//check element elgible for leader or not
        {
             temLeader=a[i];
            count++;
            leader[count]=temLeader;//storing leader elements
        }
    }
    for(int i=0; i<=count; i++)
    {
        cout<<leader[i]<<" ";//printing leader of given array
    }
 }
