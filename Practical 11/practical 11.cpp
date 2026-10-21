#include <iostream>
using namespace std;

template <class K>
K add(K m, K n)
{
    return m + n;
}

template <class K>
K sub(K m, K n)
{
    return m - n;
}

template <class K>
class Calculator
{
    K num1, num2;

    public:
        Calculator(K n1, K n2)
        {
            num1 = n1;
            num2 = n2;
        }

        K addition()
        {
            return num1 + num2;
        }
};

int main()
{
    cout << "Integer addition: " << add(7, 9);
    cout << "\nInteger subtraction: " << sub(9, 7);

    cout << "\nDecimal addition: " << add(8.2, 4.3);
    cout << "\nDecimal subtraction: " << sub(8.2, 4.3);

    Calculator<int> c1(7, 9);
    Calculator<double> c2(8.2, 4.3);

    cout << "\nClass template integer addition: "
         << c1.addition();

    cout << "\nClass template decimal addition: "
         << c2.addition();

    return 0;
}
this one is correct right and diaplyas function and class templates correctly
