#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{     
    int num=100,*ptr1,**ptr2;
    ptr1=&num;// ptr1���Vnum����} 
    ptr2=&ptr1;// ptr2���Vptr1����} 

    cout<<"num="<<num<<" &num="<<&num<<" ptr1="<<ptr1<<" *ptr1="<<*ptr1<<endl;
    cout<<"&ptr1="<<&ptr1<<" ptr2="<<ptr2<<" *ptr2="<<*ptr2<<" **ptr2="<<**ptr2<<endl;
         
    return 0;
}
