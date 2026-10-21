#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void area() = 0;

        virtual ~Shape()
        {
        }
};

class Circle : public Shape
{
    public:
        float r;

        void area()
        {
            cout << "Enter radius of circle: ";
            cin >> r;

            cout << "Area of Circle = " << 3.14 * r * r << endl;
        }
};

class Rectangle : public Shape
{
    public:
        float l, b;

        void area()
        {
            cout << "Enter length and breadth: ";
            cin >> l >> b;

            cout << "Area of Rectangle = " << l * b << endl;
        }
};

int main()
{
    Circle c;
    Rectangle r;

    Shape *ptr;

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}
