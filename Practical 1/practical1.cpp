#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int binomialCoeff(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int space = 1; space <= n-i-1; space++)
        {
            cout << " ";
        }
        for(int j = 0; j <= i; j++)
        {
            cout << binomialCoeff(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}
