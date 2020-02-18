#include <iostream>
#include <cstdlib>
using namespace std;

template<class typeX,class typeA,class typeB,class typeC>
float equation(typeX x,typeA a,typeB b,typeC c)
{
    float y;
    y=a*x*x+b*x+c;
    return y;
}
int main()
{
    int a=3;float b=2.5;int c=-1;
    int x=15;
    float ans;
    ans=equation(x,a,b,c);
    cout<<"y="<<a<<"(x*x)+"<<b<<"x+("<<c<<") x="<<x<<endl;
    cout<<"ans="<<ans<<endl;
    
    return 0;
}

