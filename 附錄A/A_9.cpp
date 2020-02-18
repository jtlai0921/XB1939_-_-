#include<iostream>
#include<cctype>
#include<cstring> 
using namespace std;

int main()
{
	int ans;
	char ch1[50];
	char ch2[50];
    
    cout<<"輸入字串一:";
    cin>>ch1;
    cout<<"輸入字串二:";
    cin>>ch2;
	
    //串接字串
    strcat(ch1,ch2);
    cout<<"串接後的字串一:"<<ch1<<endl;
    //複製字串
    strcpy(ch2,ch1);
    cout<<"複製後的字串二:"<<ch2<<endl;
    //字串的長度   
    cout<<"新字串的長度共"<<strlen(ch1)<<"個字元"<<endl;
    
    return 0;
}
