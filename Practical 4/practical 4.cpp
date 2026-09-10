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
    Complex(float r,float i)
    {
        real=r;
        img=i;
    }
    void accept()
    {
        cout<<"Enter real and imaginary part: ";
        cin>>real>>img;
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
    Complex add(Complex k)
    {
        return Complex(real+k.real,img+k.img);
    }
    Complex subtract(Complex k)
    {
        return Complex(real-k.real,img-k.img);
    }
    Complex multiply(Complex k)
    {
        return Complex(real*k.real-img*k.img,real*k.img+img*k.real);
    }
    Complex divide(Complex k)
    {
        float d=k.real*k.real+k.img*k.img;
        return Complex((real*k.real+img*k.img)/d,(img*k.real-real*k.img)/d);
    }
    Complex conjugate()
    {
        return Complex(real,-img);
    }
};
int main()
{
    Complex n1,n2,res;
    cout<< "First complex number"<<endl;
    n1.accept();
    cout<<"Second complex number"<<endl;
    n2.accept();
    cout<<"Addition: ";
    res=n1.add(n2);
    res.display();
    cout<<"Subtraction: ";
    res=n1.subtract(n2);
    res.display();
    cout<<"Multiplication: ";
    res=n1.multiply(n2);
    res.display();
    cout<<"Division: ";
    res=n1.divide(n2);
    res.display();
    cout<<"Conjugate of first number: ";
    res=n1.conjugate();
    res.display();
    return 0;
}

