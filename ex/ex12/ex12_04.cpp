#include <iostream>
#include <cstdlib>
using namespace std;

template<class T1,class T2>
void show(T1 s1,T2 s2)
{	
 cout<<"�Ѽ�s1����ƬO: "<<s1<<endl;  
 //��X�Ѽ�s1�����	
 cout<<"�Ѽ�s2����ƬO: "<<s2<<endl;   
 //��X�Ѽ�s2�����
 }
 
int main()
{	
  int sh1 = 10;  //�ŧiint���A�ܼ�sh1�A�ë��w��Ȭ�10	
  char* sh2 = "Test!"; //�ŧi�r���ܼ�sh2�A�ë��w��Ȭ�Test!	
  show(sh1,sh2);                 
 //�I�sshow��Ƽ˪O
  
 
  return 0;
 }
