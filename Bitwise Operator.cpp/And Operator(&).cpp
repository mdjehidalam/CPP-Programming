//bitwise operator only work on interger ( format of binarary)
// T  T   T
// T  F  T
//---------
// T  F   T
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     //bitwise operator only work on bibarary number
    int a,b,n;
    cin>>a>>b;
    n=a&b;
    cout<<n<<endl;   
 }
