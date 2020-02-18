#include <iostream>
#include <cstdlib>	
using namespace std;

//定義一個Baseball的類別
class Baseball
{
    //定義私用資料及函數成員
	private:
		char player[20];         //打擊者姓名         
		int fires;               //打擊次數
		int safes;               //安打次數
	    //宣告私用的函數成員countsafe的原型用以計算打擊者打擊率
		float countsafe(void);
	   
	//定義公用資函數成員
	public:
	    static long sumfires;    //靜態資料成員總打擊次數
		static long sumsafes;    //靜態資料成員總安打次數
	
	    //宣告公用的函數成員inputplayer的原型用以顯示打擊者資料
	  	void inputplayer();
	    //宣告公用的函數成員showplayer的原型用以顯示打擊者資料
		void showplayer();   	
};
//指定靜態資料成員的初始值
long Baseball::sumfires=0;
long Baseball::sumsafes=0;
	
void Baseball:: inputplayer (void)       //類別外實現inputplayer函數成員
{
	cout<<"打擊者：";                     
	cin>>player;          //輸入打擊者姓名
	cout<<"打擊次數：";
	cin>>fires;           //輸入打擊次數
	cout<<"安打次數：";
	cin>>safes;	                         //輸入安打次數
}
void Baseball::showplayer(void)          //類別外實現showplayer函數成員
{
	float fs;
	fs=countsafe();                     //透過countsafe 函數成員計算並傳回打擊率
	cout<<"================================"<<endl;
	cout<<"打擊者："<<player<<endl;     //顯示打擊者姓名
	cout<<"打擊次數："<<fires<<endl;    //顯示打擊次數
	cout<<"安打次數："<<safes<<endl;    //顯示安打次數
	cout<<"打擊率："<<fs<<endl;         //顯示安打率
	sumfires=sumfires+long(fires);      //累加總打擊次數
	sumsafes=sumsafes+long(safes);      //累加總安打次數
}
float Baseball::countsafe()             //類別外實現countsafe函數成員
{
	float counts;                           //宣告打擊率變數
	counts=(float(safes) / float(fires));   //計算打擊率 安打次數/打擊次數
	return counts;                          //傳回打擊率
} 
	
//宣告一般函數sumcountsafe的原型用以計算總打擊率
float sumcountsafe()           //類別外實現sumcountsafe函數成員
{
	float sumcounts;
	sumcounts=(float(Baseball::sumsafes) / float(Baseball::sumfires));
	return sumcounts;
} 
	
//宣告一般函數sumshowplayer的以顯示及計算總打擊率
void sumshowplayer(void)             
{
    float sumfs;
	sumfs=sumcountsafe();
	cout<<"================================"<<endl;
	cout<<"總打擊次數："<<Baseball::sumfires<<endl;
	cout<<"總安打次數："<<Baseball::sumsafes<<endl;
	cout<<"總打擊率："<<sumfs<<endl;
}
	
//宣告一般函數clearsum將類別的靜態資料成員設為0
void clearsum()
{
	Baseball::sumfires=0;          //將類別Baseball之靜態資料成員sumfires設為0
		Baseball::sumsafes=0;          //將類別Baseball之靜態資料成員sumfires設為0
		cout<<"====================================="<<endl;
		cout<<"打擊次數初始值："<<Baseball::sumfires<<endl;
		cout<<"安打次數初始值："<<Baseball::sumsafes<<endl;
}
	
int main()
{
	Baseball b[3];         //宣告類別陣列
	int i;
	cout<<"輸入資料"<<endl;
	cout<<"================================"<<endl;
	
	for (i=0;i<3;i++)
	{
		b[i].inputplayer();
	}
	
	cout<<"================================"<<endl;
	cout<<"顯示資料"<<endl;
	for (i=0;i<3;i++)
	{
		b[i].showplayer();
  	}
	sumshowplayer();
	clearsum();
		
	return 0;
}
