 #include<bits/stdc++.h>
 using namespace std ;
 int main()
 {
     int n=5;
     int a[n]={1,2,4,5,6};
     for(int i=0; i<5; i++)
     {
         cout<<a[i]<<" ";
     }
     int in;//
     cin>>in;//taking element which you want to insert from user ;
     
     int index;
     cin>>index;// taking position from user 
     
     int tem[n];
     for(int i=0; i<n ; i++)
     {
         tem[i]=a[i];//copying the given array to temporary array
     }
     n++;//here is incresing size of given array
     for(int i=index; i<n ; i++)
     {
         
         if(i==index)
         {
             a[i]=in;//insert element of the given position
         }
         
         a[i+1]=tem[i];// rest of elements past to the given element
     }
     
          for(int i=0; i<n; i++)
     {
         cout<<a[i]<<" ";//print final elements 
     }
     
     
 }
