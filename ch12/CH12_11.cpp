#include<iostream>
#include<cstdlib>
using namespace std;
	
int main()
{
    int num;  // 宣告一個整數變數num
    try  // 最外層的try...catch 區塊
    {
        try  //最內層的try...catch區塊
        {
            cout<<"輸入一個值:";
            cin>>num;
            // 判斷變數值num是否大於0且小於10
            if ((num > 0) && (num < 10))
            {
                throw 1; // 當變數num值大於0且小於10時，則丟出一個型別為整數的例外
            }
				// 判斷變數值num是否大於10且小於20
			if ((num > 10) && (num < 20))
			{
			    throw 2.5; // 當變數num值大於10且小於20時，則丟出一個型別為浮點數的例外
			}
        }
        catch(int ex1)  // 捕捉型別為整數的例外
        {
            cout<<"執行最內層的catch區塊\n";
        }
    }
    catch(double ex2)  // 捕捉型別為浮點數的例外
    {
        cout<<"執行最外層的catch區塊\n";
    }
    cout<<"程式將要結束執行"<<endl;
		
    return 0;
}
