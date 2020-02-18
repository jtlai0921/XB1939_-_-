#include<iostream>
#include<cstdlib>
using namespace std;
	
// 宣告類別building
class building
{
	public :
		virtual void open(){}; // 宣告虛擬函數
};
// 宣告衍生類別firs_building
class first_building : public building
{
	public:
		virtual void open()
		{
			cout << "開啟第一棟大樓的門" << endl;
		}
};
	// 宣告衍生類別second_building
class second_building : public first_building
{
	public:
		virtual void open()
		{
			cout << "開啟第二棟大樓的門" << endl;
		}
};
// 主函數
int main()
{
    // 宣告first_building類別型別的指標變數b1，並同時建立物件
    first_building *b1 = new first_building();
    // 宣告second_building類別型別的指標變數b2，並同時建立物件
    second_building *b2 = new second_building();
    // 呼叫first_building類別成員函數open
    b1->open();
    // 呼叫second_building類別成員函數open
    b2->open();
		
    return 0;
}
