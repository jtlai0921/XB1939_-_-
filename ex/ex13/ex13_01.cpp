#include <iostream>             //�ޤJ<iostream>���Y��
#include <iomanip>                //�ޤJ<iomanip>���Y��
#include <cstdlib> 
using namespace std;

int main()
{
    int num;                                            //�ŧi�@�Ӿ�ƨ��x�s�q�ܸ��X
    char name[10];                                      //�ŧi�@�Ӧr���}�C���x�s�m�W
    char address[10];                                   //�ŧi�@�Ӧr���}�C���x�s���y�a
    cout<<"�п�J�m�W�G";
    cin>>name;                                          //�s���J�m�W�B�q�ܩM���y�a
    cout<<"�п�J�q�ܡG";
    cin>>num;                                           //�s���J�m�W�B�q�ܩM���y�a
    cout<<"�п�J���y�a�G";
    cin>>address;                                       //�s���J�m�W�B�q�ܩM���y�a
    cout<<setw(10)<<"�m�W"<<setw(10)<<"�q��"<<setw(10)<<"���y�a"<<endl;
    cout<<"================================"<<endl;
    cout<<setw(10)<<name<<setw(10)<<num<<setw(10)<<address<<endl;
    
    
    return 0;                                           
}
