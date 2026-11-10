#include <iostream>
using namespace std;
int fib(int n){
    int a = 0 ;
    int b = 1 ,temp;
    if(n == 1){
        return a;
    }
    for(int i = 2 ; i < n ; i++){
        temp = a;
        a = b; 
        b = temp + b;
    }
    return b ;
}
int main(){
    int n;
    cout<<"Enter How many Terms you Want of Fibonacci Series :- ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid input .\n";
    }
    else{
        cout<<"Fibonacci Series :- ";
        for(int i = 1 ; i <= n ; i ++){
            cout<<fib(i)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}