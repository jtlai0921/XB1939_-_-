#include <iostream>
#include <cstdlib>       //�t�A <cstdlib> ���Y�� 
using namespace std;

int main()
{
	char Read_Str[20]; //�w�q�r���}�C Read_Str[20] 
    double d,cubic;
    
    cout<<"�п�J�����ഫ����ƪ��r��:";
    cin>>Read_Str;  //Ū���r�� 
    d=atof(Read_Str); //atof() �禡�ƿ�X 
    cubic=d*d*d;
    cout<<d<<"���ߤ��="<<cubic<<endl;     
                                        	
    return 0;
}
