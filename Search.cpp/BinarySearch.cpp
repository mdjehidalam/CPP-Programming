 #include<iostream>
 using namespace std;
 bool binrarySerach(int a[],int n , int k,int s, int e)
 {
      
    
     while(s<e)
     {
         int mid=(s+e)/2;
         if(a[mid]==k)
         {
             return true;
         }
         else if(a[mid]<k)
         {
             s=mid+1;
             binrarySerach(a,n,k,s,e);
         } else{
             e=mid;
             binrarySerach(a,n,k,s,e);
         }
     }
     return false;
     
 }
 
 
 void bubbleSort(int a[], int n)
 {
     for(int i=0; i<n ; i++)
     {
         for(int j=i+1; j<n ; j++)
         {
             if(a[i] >a[j])
             {
                 swap(a[i],a[j]);
             }
         }
     }
 }
 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0 ;i<n ;i++)
     {
         cin>>a[i];
     }
     bubbleSort(a,n);
      for(int i=0 ;i<n ;i++)
     {
         cout<<a[i]<<" ";
     }
     int k=1;
     if(binrarySerach(a,n,k,0,n))
     cout<<"true "<<endl;
     else
     cout<<"flase"<<endl;
 }
