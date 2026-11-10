#include <iostream>
using namespace std;
int sumOfDigit(int n){
    int reminder = 0,sum= 0;
    while(n!=0){
        reminder = n%10;
        sum += reminder;
        n /= 10;
    }
    return sum;
}
int main(){
    int number ;
    cout<<"Enter The Number :- ";
    cin>>number ;
    cout<<"Sum of Digit of "<<number << " :- "<<sumOfDigit(number)<<endl;
    return 0;
}