 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    string s;//create an string 
    cin>>s; //taking input from user
    int i=0;
    while(s[i]!='\0')// repeating until nullcharachar('\0')
    {
        if(s[i]>= 'a' && s[i] <='z')
        {
            s[i]=s[i]-32;//here is converting lowerCase into UpperCase
        }
        i++;
    }
     cout<<s<<endl;//Printing string 
 }
 
 
