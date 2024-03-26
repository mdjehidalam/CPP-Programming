 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n, m ;
     cin>>n>>m;
     int a[n][m]; // n is no of rows and m is no of columns 
     // input
     for(int i=0; i<n ; i++)
     {
         for(int j=0; j<m ;j++)
         {
             cin>>a[i][j];
         }
     }
     
     // output or print 
     for(int i=0; i<n ;i++)
     {
         for(int j=0; j<m ; j++)
         {
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
 }
