 #include<iostream>
 using namespace std;
 class fraction
 {
    private: 
    int denominator;
    int nominerator;
    public: 
    fraction( int nomi, int den)
    {
        denominator=den;
        nominerator=nomi;
    }
    void display()
    {
        cout<<nominerator<<"/"<<denominator<<endl;
    }
    void add(fraction const &f2)
    {
        int lcm=this->denominator*f2.denominator;
        int x= lcm/this->denominator;
        int y= lcm/f2.denominator;
        int num= this->nominerator*x + f2.nominerator*y;
        // store value of f1
        this->nominerator=num;
        this->denominator=lcm;
        simplify();
    }
    // gcd full form : greatest common divisor
    // inbuid funtion for gcd = __gcd(nominerator, denominerator)
    // eg: int gcd= __gcd(nominerator, denominerator)
    void simplify()
    {   int gcd;
        int j= min(this->nominerator, this->denominator);
        for(int i=1; i<=j; i++)
        {
            if(nominerator%i==0 && denominator%i==0)
            {
                gcd=i;
            }
        }
        // simplifying nominerator and denominerator
        this->nominerator=nominerator/gcd;
        this->denominator=denominator/gcd;
    }
 };
 int main()
 {
    fraction f1(10,2),f2(15,4);
    f1.display();
    f2.display();
    f1.add(f2);
    f1.display();
    f1.display();
    return 0; 

 }