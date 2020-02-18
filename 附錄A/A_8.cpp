#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    
    char str[50]="applepie",str1[50];
    
    cout<<"str字串="<<str<<"的字串長度="<<strlen(str)<<endl;
    //利用strlen所求出的字串長度並不包含「\0」，因此字串長度是8
    
    strcpy(str1,str);//將str拷貝到str1
    cout<<"str1字串="<<str1<<endl;
    
    strcat(str1,str); 
    cout<<"串接後的str1字串="<<str1<<endl;//將str串接在str1之後
    
    cout<<"strchr(str1,'l')="<<strchr(str1,'l')<<endl;
    //搜尋c字元在str字串中第一次出現位置，並列印出以後的字元 
    cout<<"strrchr(str1,'l')="<<strrchr(str1,'l')<<endl;
    //搜尋c字元在str字串中最後一次出現位置，並列印出以後的字元 
                               
	return 0;
}
