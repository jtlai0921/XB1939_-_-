#include <iostream>  
#include <cstdlib>  
 
using namespace std;
 
int Get_Area(int Width, int Height);   // �p��x�έ��n  
int Get_Area(int Up, int Bottom, int Height);   // �p���έ��n  
 
double Get_Area(int r);  // �p��ꭱ�n  
 
int main()  
{  
    int Width, Height, Up, Bottom, r; // Width:�� Heidht:�e  
    // Up:�W�� Bottom:�U��  
    // r:��b�|  
    cout << "�п�J�x�Ϊ����μe(���G����)�G";  
    cin >> Width >> Height;  
    cout << "�x�έ��n���G " << Get_Area(Width, Height)<< " ���褽��" << endl;  
    cout << endl;  
    cout << "�п�J��Ϊ��W���B�U���ΰ���(���G����)�G";  
    cin >> Up >> Bottom >> Height;  
    cout << "��έ��n���G" << Get_Area(Up, Bottom, Height)<< " ���褽��" << endl;  
    cout << endl;  
    cout << "�п�J��b�|(���G����)�G";  
    cin >> r;  
    cout << "�ꭱ�n���G" << Get_Area(r)<< " ���褽��" << endl; 
  
    return 0;
}  
 
int Get_Area(int Width, int Height)  
{  return Width * Height;  }      // �Ǧ^�x�έ��n   
int Get_Area(int Up, int Bottom, int Height) 
{  return (Up+Bottom) * Height / 2 ;  }  // �Ǧ^��έ��n  
double Get_Area(int r)  
{  return r*r*3.14; }
