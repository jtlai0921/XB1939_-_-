#include<iostream>
#include<cstdlib>
	// 引用字串類別
#include <string>
	
using namespace std;
	
int main()
{
    // 宣告String字串
    string str1,str2,str3;
		
    cout<<"請輸入兩字串:"; 
    cin>>str1>>str2;
    // 進行字串連接運算
    str3=str1+str2;
		
    // 進行字串之間的比較
    cout<<"str1="<<str1<<endl;
    cout<<"str2="<<str2<<endl;
    cout<<"str3="<<str3<<endl;
		
    if (str1 > str2)
        cout << "str1 > str2 " << endl;
    else
        cout << "str1 < str2 " << endl;
			
    return 0;
}
