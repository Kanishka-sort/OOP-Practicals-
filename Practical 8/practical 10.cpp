#include<iostream>
using namespace std;
int main()
{
int num,k,res;
cout<<"Enter 2 numbers:"<<endl;
cin>>num>>k;
try
{
if(k==0)
throw k;
res=num/k;
cout<<"Result:\t"<<res;
}
catch(int x)
{
cout<<"Division by zero is not permitted"<<endl;
cout<<"Error is division by:\t"<<x;
}
cout<<endl<<"At the end of main.";
return 0;
}
