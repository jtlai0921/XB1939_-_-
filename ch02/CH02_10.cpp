#include <iostream>


using namespace std;

int main()
{
    //�ŧi�ܼ�
    int a, b, c;
    float d;      
    //��J�T�Ӽ�
    cout << "�п�J�T�Ӽ�a, b, c:";
    cin >> a >> b >> c;
    d = (a*a+b*b)*c / (float)(a*b*c); //�B�⦡ 
    cout << "�p�⵲�G=" << d << '\n';
  
  
    return 0;
}

