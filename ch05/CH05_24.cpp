#include <iostream>  
#include <cstdlib> 
using namespace std;
 
double Get_Length(int m);   // 宣告公尺轉英呎的函式原型宣告  
// 參數 m 代表公尺  
int main()  
{  
    register int m;	  // 宣告整數型態的register變數 m  
    cout << "公尺\t 英呎" << endl;  
    for (m=10; m<21; m++)	// 計算10～20公尺的對應英呎數 
        cout << m << "\t" << Get_Length(m) << endl;  
        
    return 0;
}  

double Get_Length(int m)  
{  
    double ft;	   // 宣告雙精確浮點數變數 ft  
    ft = m * 3.28;   // 計算英呎  
    return (ft); 
}
