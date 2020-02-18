#include <iostream>  
#include <cstdlib> 

using namespace std;
 
int main()  
{  
    auto int i,Sum=0;    //宣告區域變數，並設定Sum的初始值  
    for (i=0; i<4; i++) 
    {  
        Sum +=i;		  //在for迴圈中遞增Sum值  
        cout << "Sum 的值為：" << Sum << endl;  
        {  
		    auto int Sum=100;  //在for迴圈中建立另一個內部區塊 
            //並宣告及初始化區域變數Sum的值  
            Sum += 10;	      //在區域中將Sum值加10並列印出來  
            cout << "內部區塊的 Sum 值為：" << Sum << endl;  
       	}  
    }  
       
    return 0;
}
