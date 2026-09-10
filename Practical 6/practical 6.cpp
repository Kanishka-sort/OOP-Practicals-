#include<iostream>
using namespace std;
class Complex
{
    float real,img;
public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(float a,float b)
    {
        real=a;
        img=b;
    }
    void accept()
    {
        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter imaginary part: ";
        cin>>img;
    }
    void display()
    {
        cout<<real;
        if(img>=0)
            cout<<" + "<<img<<"i";
        else
            cout<<" - "<<-img<<"i";
        cout<<endl;
    }
    Complex operator+(Complex g)
    {
        return Complex(real+g.real,img+g.img);
    }
    Complex operator-(Complex g)
    {
        return Complex(real-g.real,img-g.img);
    }
    Complex operator*(Complex g)
    {
        return Complex(real*g.real-img*g.img,real*g.img+img*g.real);
    }
    Complex operator/(Complex g)
    {
        float k=g.real*g.real+g.img*g.img;
        return Complex((real*g.real+img*g.img)/k,(img*g.real-real*g.img)/k);
    }
};
int main()
{
    Complex p,q,r;
    cout<<"Enter first complex number:"<<endl;
    p.accept();
    cout<<"Enter second complex number:"<<endl;
    q.accept();
    cout<<"Addition: ";
    r=p+q;
    r.display();
    cout<<"Subtraction: ";
    r=p-q;
    r.display();
    cout<<"Multiplication: ";
    r=p*q;
    r.display();
    cout<<"Division: ";
    r=p/q;
    r.display();
    return 0;
}

