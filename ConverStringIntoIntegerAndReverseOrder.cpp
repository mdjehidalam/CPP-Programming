//first  of all convert string into integer  then convert into reverse order digits 

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     string s; // create an string 
     cout<<"Enter the string (Please ONLy DIGITS): "<<flush;//Printing message 
     cin>>s; //Taking input from User
     int digits=0;
     int i=0;
     while(s[i]!='\0')
     {
         digits=digits*10+s[i]-'0';//conveting string into integer
         i++;
     }
     cout<<"digits: "<<digits<<endl;//printing integers
     int reverse=0;
     //convert into reverse order
      while(digits>0)
      {
          int Last_digits=digits%10;//obtain last digit
          reverse=reverse*10+Last_digits;
          digits=digits/10;//delete last digits
      }
      cout<<"Reverse: "<<reverse<<endl;//printing reverse order digits 
     return 0;
 }
 
