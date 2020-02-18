#include <iostream>
#include <cstdlib>	
using namespace std;

//定義一個Baseball的類別
class Baseball
{
	//定義私用資料成員
	private:
	char player[20];       //打擊者姓名         
	int fires;             //打擊次數
	int safes;             //安打次數
	
    float countsafe()     //定義私用函數成員
	{
	    float counts;     //宣告打擊率變數
	    counts=(float(safes) / float(fires));   //計算打擊率 安打次數/打擊次數
	    return counts;    //傳回打擊率
	} 
	
	//定義公用函數成員
	public:
	//宣告公用的函數成員inputplayer
	void inputplayer()
	{
	    cout<<"打擊者：";                     
	    cin>>player;      //輸入打擊者姓名
	    cout<<"打擊次數：";
	    cin>>fires;       //輸入打擊次數
	    cout<<"安打次數：";
	    cin>>safes;	      //輸入安打次數
    }
    void showplayer()    //showplayer函數成員以顯示打擊者資料
    {
	    cout<<"================================"<<endl;
	    cout<<"打擊者："<<player<<endl;     //顯示打擊者姓名
	    cout<<"打擊次數："<<fires<<endl;    //顯示打擊次數
	    cout<<"安打次數："<<safes<<endl;    //顯示安打次數
	    cout<<"打擊率:"<<countsafe()<<endl;
	}
 };

int main()
{
	Baseball b;
	b.inputplayer();    //呼叫物件b的inputplayer 函數成員，以輸入的打擊者資料
	b.showplayer();    //呼叫物件b的showplayer  函式數成員，以顯示所輸入的打擊者資料

	return 0;
}
