#include <iostream>
#include <cstdlib>
using namespace std;

#include <cstring>
//宣告一個函數使用If判斷式來偵測錯誤
int If_Detect(int);
//宣告類別Birth
class Birth
{
    int Birth_Year;
    int Nor_Year;
    public:
        //宣告一個類別以供錯誤處理之用
		class Error_Detect
		{
			char Error_Msg[80];
		    public:
				//處理錯誤訊息
				Error_Detect(char * x)
				{
					strcpy(Error_Msg, x);
                }
				char * Get_Error_Msg()
				{
					return Error_Msg;
				}
		};
		//無參數建構子
		Birth(){};	
		//宣告Check()函數來檢查輸入的出生年份
		int Check()
		{
			int a = Birth_Year;
			int b = 2008 - a;
			if (a > 2008)
	          	throw Error_Detect("輸入的年份錯誤喔!!您尚未出生呢!!");         	
			if (b > 150)
	         	throw Error_Detect("輸入的年份錯誤喔!!您年齡大於150歲呢!!");
			    Nor_Year = Birth_Year - 1911;
				return Nor_Year;
		}
		//宣告Get_Year()函數來輸入出生年份
		void Get_Year()
		{
			cout <<"請輸入出生的西元年份：";
			cin >> Birth_Year;
		}
};

int main()
{
	//try運作區塊
	try
	{
		//建立類別Birth的物件Object
		Birth Object;
		Object.Get_Year();
		//檢查年份
		Object.Check();
		//正確則輸出
		cout <<endl <<"您的出生年份為：民國";
		cout <<Object.Check() <<"年" <<endl;
	}
	//處理錯誤訊息,
	//catch中的參數為宣告Birth類別中
	//的Error_Detect類別的物件Object2
	catch (Birth::Error_Detect Object2)
	{
		//利用物件Object2來呼叫Get_Error_Msg來顯示錯誤訊息
		cout <<endl <<Object2.Get_Error_Msg();
	}
	
    return 0;
}

