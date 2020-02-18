#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    char *ptr= "cherry";//以指標宣告字串方式 
    char name[] = { 'c', 'h', 'e', 'r', 'r','y','\0'};
    //以字元陣列宣告字串方式
     
    cout<<"ptr="<<ptr<<" 所佔空間大小:"<<sizeof(ptr)<<"位元  name="
    <<name<<"所佔空間大小:"<<sizeof(name)<<"位元"<<endl;
     
    for(i=0;i<6;i++)
    { 
        cout<<"ptr+"<<i<<"="<<ptr+i<<endl;
        cout<<"name+"<<i<<"="<<name+i<<endl;
        cout<<"-------------------------------------"<<endl;
    }
    //分別以指標變數及指標常數輸出字串  
     
    for(i=0;i<6;i++)
    {
        cout<<ptr<<endl;
        ptr++; // 將ptr加一 
    }
    
    return 0;
}
