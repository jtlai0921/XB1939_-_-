#include <iostream> 
#include <cstdlib>
#include "CH05_23_1.h"  // 載入自訂的標頭檔  
using namespace std;

int Enchant;          // 宣告全域變數，代表精練值  
int main()  
{  
    cout << "傷害值=(1-精練值/100)*敵人攻擊力" << endl; 
    cout << "假設敵人攻擊力為1150，則" << endl;  
    cout << "精練值\t傷害值" << endl;  
    for (Enchant=0;Enchant<=60; Enchant+=10)  
        cout << "+" << Enchant << "\t" << Damage() << endl;  
        // 呼叫自訂標頭檔中的Damage()函數  

    return 0;
}
