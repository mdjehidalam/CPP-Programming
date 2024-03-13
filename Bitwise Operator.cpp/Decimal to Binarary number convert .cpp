 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    vector<int>bin;
    while(n>0)
    {
        if(n%2==0)
    {
        bin.push_back(0);
        n/=2;
    }else {
        bin.push_back(1);
       n=(n-1)/2;
    }
     
    }
    for(int i=bin.size(); i>=0; i--)
    {
        cout<<bin[i]<<" ";
    }
     
 }
