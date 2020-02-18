#include <iostream>
#include <cstdlib>
using namespace std;
char* Strcat(char*, char*);   // 字串串接 
 int main()
{
    char str1[80];
	char str2[80];
	cout<<"請輸入一英文字串：";
	cin>>str1;
	cout<<"請輸入一串接字串：";
	cin>>str2;
	Strcat(str1, str2);
	cout<<"字串串接："<<str1<<endl;
	    

	return 0;
}
// 引數：str1與str2串接       
// 傳回值：傳回串接結果str1   
char* Strcat(char* str1, char* str2)
{
	int i = 0;
	int j = 0;
	while ( *(str1+i) != '\0' )  // 尋找str1的結束字元'\0'位置 
	    i++;
	while ( *(str2+j) != '\0' )
	{
	    *(str1+i+j) = *(str2+j);
	    j++;
	}
	*(str1+i+j) = '\0';    // 記得加上空字元 
	return str1;
}

