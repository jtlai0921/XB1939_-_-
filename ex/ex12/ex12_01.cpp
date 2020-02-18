#include <iostream>
using namespace std;
#define pi 3.1415904	

template <class T>
class circle
{
 private:
  T r;
 public:
  void getR(T radius);
  T area();
 };
 //----------------------------
 template <class T>
 void circle<T>::getR(T radius)
 {r = radius;}
 //----------------------------
 template <class T>
 T circle<T>::area()
 {
  T area;
  area = r*r*pi;
  return area;
  }
 //----------------------------
 int main()
 {
  circle<float> fCir;
  fCir.getR(5);
  cout<<"fCir ªº­±¿n = "<<fCir.area()<<endl;
  
  
  return 0;
 }
