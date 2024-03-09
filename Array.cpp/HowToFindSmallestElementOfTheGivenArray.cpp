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
     int smallest=a[0];
     for(int i=1; i<n ;i++)
     {
             if(smallest>a[i])
             {
                 smallest=a[i];
             }
     }
     cout<<"smallest Element of the given array: "<<smallest<<endl;
 }
