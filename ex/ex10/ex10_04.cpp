#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass
{
public:
    int m_Data;
    
    MyClass(int iVal)//建構子 
    {
        m_Data=iVal;
    }
    //覆載算術運算子，並宣告為夥伴函式 
    friend int operator+(MyClass&,int&);
    friend int operator-(MyClass&,int&);    
    friend int operator*(MyClass&,int&);        
    friend int operator/(MyClass&,int&);            
};

int operator+(MyClass& myClass,int& iVal)//加法運算子 
{
    return myClass.m_Data+iVal;
}

int operator-(MyClass& myClass,int& iVal)//減法運算子
{
    return myClass.m_Data-iVal;
}

int operator*(MyClass& myClass,int& iVal)//乘法運算子 
{
    return myClass.m_Data*iVal;
}

int operator/(MyClass& myClass,int& iVal)//除法運算子
{
    return myClass.m_Data/iVal;
}

int main(void)
{
    int iVal=10;
    MyClass* myClass=new MyClass(10);
    cout<<"myClass+iVal="<<*myClass+iVal<<endl;
    cout<<"myClass-iVal="<<*myClass-iVal<<endl;    
    cout<<"myClass*iVal="<<*myClass*iVal<<endl;
    cout<<"myClass/iVal="<<*myClass/iVal<<endl;
    delete myClass;
    
    
    return 0;
}
