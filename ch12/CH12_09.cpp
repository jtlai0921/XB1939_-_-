#include <iostream>
#include <cstdlib>
using namespace std;

//主程式區塊
int main()
{
    //宣告出生年、月、日變數
    int Birth_Year;
    cout <<"請輸入出生西元年份：";
    cin >>Birth_Year;
	//錯誤偵測區塊
    try
    {
	    //宣告兩個變數i,j方便處理算式
	    int i = Birth_Year;
	    int j = 2008 - Birth_Year;
      
	    //判斷出生年份是否大於今年
	    if (i > 2008)
        {
		    //如果大於今年丟出錯誤訊息字串
		    throw 0;  
	    }
	  
	    //判斷年齡是否大於150歲
        if (j > 150)
        {
		    //如果大於一百五十歲都出錯誤訊息字串
		    throw 1; 
        }

        //無錯誤發生的正常程式處理片段
	    int Nor_Year = Birth_Year - 1911;
        cout <<endl <<"您的出生年份為：民國" 
            <<Nor_Year <<"年" <<endl;          
    }

    //catch接到throw丟出的字串以show變數儲存
	catch (int i)
    { 
	   //以cerr立即輸出錯誤訊息show
       cout<<"輸入條件不符合,請重新輸入!"<<endl;
	}	
            
    return 0;
}
