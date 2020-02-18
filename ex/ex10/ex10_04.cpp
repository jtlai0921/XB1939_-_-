#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass
{
public:
    int m_Data;
    
    MyClass(int iVal)//�غc�l 
    {
        m_Data=iVal;
    }
    //�и���N�B��l�A�ëŧi���٦�禡 
    friend int operator+(MyClass&,int&);
    friend int operator-(MyClass&,int&);    
    friend int operator*(MyClass&,int&);        
    friend int operator/(MyClass&,int&);            
};

int operator+(MyClass& myClass,int& iVal)//�[�k�B��l 
{
    return myClass.m_Data+iVal;
}

int operator-(MyClass& myClass,int& iVal)//��k�B��l
{
    return myClass.m_Data-iVal;
}

int operator*(MyClass& myClass,int& iVal)//���k�B��l 
{
    return myClass.m_Data*iVal;
}

int operator/(MyClass& myClass,int& iVal)//���k�B��l
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
