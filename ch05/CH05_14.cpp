#include <iostream>
#include <cstdlib>
using namespace std;

void add(int &,int &);	//�ǰѦҩI�s��add()��ƪ��쫬 

int main()
{
    int a=5,b=10;
   
    cout<<"�I�sadd()���e,a="<<a<<" b="<<b<<endl;  
    add(a,b);	//�I�sadd���,����a=a+b; 
    cout<<"�I�sadd()����,a="<<a<<" b="<<b<<endl;
  
    return 0;
}

void add(int &p1,int &p2)//�ǧ}�I�s����Ʃw�q 
{
   p1=p1+p2; 
}

