#include <iostream>  
#include <cstdlib> 
using namespace std;
 
void Add_Num();    // 建立累加變數值的函數宣告  

int main() 
{  
    int count;  
    for (count=0; count<5; count++)  
        Add_Num();	// 透過for迴圈執行函數呼叫5次  
     
    return 0;
}  

void Add_Num() 
{  
    auto int auto_Num=1;	// 宣告並初始化自動變數 
    static int static_Num=1;	// 宣告並初始化靜態變數  
    cout << "自動變數 auto_Num 的值為：" << auto_Num << endl;  
    cout << "靜態變數 static_Num 的值為：" << static_Num << endl;  
    cout << endl;  	
    auto_Num++;	   // 將auto變數加 1  
    static_Num++;  // 將static變數加 1  
}
