#include<iostream>
#include<cstdlib>
	// �ޥΦr�����O
#include <string>
	
using namespace std;
	
int main()
{
    // �ŧiString�r��
    string str1,str2,str3;
		
    cout<<"�п�J��r��:"; 
    cin>>str1>>str2;
    // �i��r��s���B��
    str3=str1+str2;
		
    // �i��r�ꤧ�������
    cout<<"str1="<<str1<<endl;
    cout<<"str2="<<str2<<endl;
    cout<<"str3="<<str3<<endl;
		
    if (str1 > str2)
        cout << "str1 > str2 " << endl;
    else
        cout << "str1 < str2 " << endl;
			
    return 0;
}
