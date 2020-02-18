#include <iostream>  
#include <cstdlib>

using namespace std;

void Fun1();  
void Fun2();  
   
int main()  
{  
    auto int i=10;     //跋办跑计 i 度ㄑmain()ㄧ计ㄏノ 
    
    cout<<"祘Αい跑auto跑计 i "<<i<<endl;  
    Fun1();  
    Fun2();  
    cout<<"㊣祘Αいauto跑计 i "<<i<<endl;  
   
    return 0;
}
void Fun1()  
{  
    auto int i=20;    //跋办跑计 i 度ㄑFunction1()ㄧΑ计ㄏノ 
    cout<<"fun1()いauto跑计 i "<<i<<endl;  
}  
void Fun2()  
{  
    auto int i=30;    
    //跋办跑计 i 度ㄑFunction2()ㄧ计ㄏノ   
    cout<<"fun2()いauto跑计 i "<<i<<endl;  
}
