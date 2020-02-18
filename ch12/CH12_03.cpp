#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
T sum(T n1,T n2)
{	
    return n1 + n2;
}

int main()
{	
    
    float ret2=sum <float>(10.2f,20);	
    cout<<ret2<<endl;  //30.2
    
    return 0;
}
