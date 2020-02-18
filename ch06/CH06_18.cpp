#include <iostream>
#include <cstdlib>
using namespace std;
#define length 40

void string_copy(char arr1[],char arr2[]);// 拷貝函數原型宣告 

int main()
{
    char Str1[length];  //定義字元陣列 Str1[40] 
    char Str2[length];    //定義字元陣列 Str2[40] 
     
    cout<<"請輸入準備拷貝的字串:"; 
    cin>>Str1;// 輸入字串 
    string_copy(Str1,Str2);//呼叫函數 
    cout<<"拷貝後的字串:"<<Str2<<endl;
     
    return 0;
}

void string_copy(char arr1[],char arr2[])
{
    int i;
    for(i=0;i<length;i++)
        arr2[i]=arr1[i];//逐一拷貝字元  
}
