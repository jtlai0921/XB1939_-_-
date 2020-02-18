#include<iostream>
#include<cstdlib>
using namespace std;
	
int main()
{
    int num; // 宣告變數num
    try 
    {
        cout << "輸入變數num的值：";  // 輸入變數num的值
        cin>>num;
        // 假如變數num的值小於10時，則會丟出一個型別為整數的例外
        if (num < 10) 
        {
            throw 1;  // 丟出整數型別的例外
        }
    }
    catch(int) // 捕捉整數型別的例外
    {
        cout << "執行catch(int)區塊" << endl;
    }
    // 當沒有丟出例外或已執行catch區塊之後，都會將控制權轉移至此
    cout << "當沒有丟出例外時，會直接執行此行" << endl;
		
    return 0;
}
