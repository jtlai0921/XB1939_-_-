#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    
    char str[50]="applepie",str1[50];
    
    cout<<"str�r��="<<str<<"���r�����="<<strlen(str)<<endl;
    //�Q��strlen�ҨD�X���r����רä��]�t�u\0�v�A�]���r����׬O8
    
    strcpy(str1,str);//�Nstr������str1
    cout<<"str1�r��="<<str1<<endl;
    
    strcat(str1,str); 
    cout<<"�걵�᪺str1�r��="<<str1<<endl;//�Nstr�걵�bstr1����
    
    cout<<"strchr(str1,'l')="<<strchr(str1,'l')<<endl;
    //�j�Mc�r���bstr�r�ꤤ�Ĥ@���X�{��m�A�æC�L�X�H�᪺�r�� 
    cout<<"strrchr(str1,'l')="<<strrchr(str1,'l')<<endl;
    //�j�Mc�r���bstr�r�ꤤ�̫�@���X�{��m�A�æC�L�X�H�᪺�r�� 
                               
	return 0;
}
