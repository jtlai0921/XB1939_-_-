#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int  one = 9;
  double two = 7.6;
  one = one + static_cast<int>(two);//�૬�B��l������ 

  cout<<"one="<<one<<endl;
  
  return 0;
}

