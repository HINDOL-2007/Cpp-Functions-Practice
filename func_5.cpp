#include <iostream>
using namespace std;
void prime(int n)
{
    bool check = true;
    if (n > 2 && n % 2 == 0)
    {
        check = false;
        return;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            check = false;
            return;
        }
    }
    if (check == true)
    {
        cout << n << "  ";
        return;
    }
}
int main()
{
    int n;
    cout << "Enter n-th value of Prime Number :- ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid Output .\n";
    }
    else
    {
        cout << "Prime number :- ";
        for (int i = 2; i <= n; i++)
        {
            prime(i);
        }
    }
    return 0;
}