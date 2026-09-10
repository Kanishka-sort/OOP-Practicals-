#include<iostream>
using namespace std;
class Calculator
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
    int add(int a,int b,int c,int d)
    {
        return a+b+c+d;
    }
    float add(float x,float y)
    {
        return x+y;
    }
};
int main()
{
    Calculator cal;
    int a,b,c,d;
    float x,y;
    cout<<"Enter 4 integers: ";
    cin>>a>>b>>c>>d;
    cout<<"Sum of 2 integers = "<<cal.add(a,b)<<endl;
    cout<<"Sum of 3 integers = "<<cal.add(a,b,c)<<endl;
    cout<<"Sum of 4 integers = "<<cal.add(a,b,c,d)<<endl;
    cout<<"Enter 2 decimal values: ";
    cin>>x>>y;
    cout<<"Sum of decimals = "<<cal.add(x,y)<<endl;
    return 0;
}
