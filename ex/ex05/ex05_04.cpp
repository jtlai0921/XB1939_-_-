#include<iostream>
#include<cstdlib>
using namespace std;

#define F(no)(no%2==0)?printf("��J�Ʀr������\n"):printf("��J�Ʀr���_��\n");

int main()
{
  int number;
  
  cout<<"�п�J�Ʀr: ";
  cin>>number;//��J�Ʀr
  F(number);
  
  
  return 0;
}
