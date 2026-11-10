#include <iostream>
using namespace std;

// Without using Recursion
int sumOfNumber(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// Using Recursion
// int sumOfNumber(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sumOfNumber(n-1);
// }

int main()
{
    int number;
    cout << "Enter n-th Term :- ";
    cin >> number;
    cout << "Sum :- " << sumOfNumber(number) << endl;
    return 0;
}