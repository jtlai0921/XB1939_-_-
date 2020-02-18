#include <iostream>
#include <cstdlib>
using namespace std;

template<class T1,class T2>
void show(T1 s1,T2 s2)
{	
 cout<<"把计s1戈琌: "<<s1<<endl;  
 //块把计s1戈	
 cout<<"把计s2戈琌: "<<s2<<endl;   
 //块把计s2戈
 }
 
int main()
{	
  int sh1 = 10;  //int篈跑计sh1﹚10	
  char* sh2 = "Test!"; //﹃跑计sh2﹚Test!	
  show(sh1,sh2);                 
 //㊣showㄧ计妓狾
  
 
  return 0;
 }
