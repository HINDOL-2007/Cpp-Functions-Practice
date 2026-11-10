#include <iostream>
using namespace std;

// Without using Recursion
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
// Using Recursion
// int factorial(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     else if (n < 0)
//     {
//         cout << "Not Possible .\n";
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

int main()
{
    int number;
    cout << "Enter The Number :- ";
    cin >> number;
    cout << number << " ! = " << factorial(number) << endl;
    return 0;
}