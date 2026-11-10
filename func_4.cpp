#include <iostream>
using namespace std;
// calculate nCr

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    cout<<"We calculate nCr .\n";
    int n,r;
    cout<<"Enter The Value of n :- ";
    cin>>n;
    cout<<"Enter The Value of r :- ";
    cin>>r;
    cout<<n<<"C"<<r<<" = "<<nCr(n,r)<<endl;
    return 0;
}