#include<iostream>
#include<cctype>
#include<cstring> 
using namespace std;

int main()
{
	int ans;
	char ch1[50];
	char ch2[50];
    
    cout<<"��J�r��@:";
    cin>>ch1;
    cout<<"��J�r��G:";
    cin>>ch2;
	
    //�걵�r��
    strcat(ch1,ch2);
    cout<<"�걵�᪺�r��@:"<<ch1<<endl;
    //�ƻs�r��
    strcpy(ch2,ch1);
    cout<<"�ƻs�᪺�r��G:"<<ch2<<endl;
    //�r�ꪺ����   
    cout<<"�s�r�ꪺ���צ@"<<strlen(ch1)<<"�Ӧr��"<<endl;
    
    return 0;
}
