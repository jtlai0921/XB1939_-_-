#include <iostream>
#include <cstring>
using namespace std;

class Baseball
{
	private:
	    char player[20];            //打擊者姓名   
	    int fires;                  //打擊次數
	    int safes;                  //安打數
	
	public:
	    void showplayer();   
	    void setplayer(char *name,int fs,int ss);   //設定資料成員函數成員
};
	
//利用傳入之參數指定資料成員的值
void Baseball::setplayer(char *name,int fs,int ss)
{
	strcpy(player,name);
	fires=fs;
	safes=ss;
}
//以this指標存取類別資料成員
void Baseball::showplayer()          
{
	cout<<"================================"<<endl;
	cout<<"打擊者："<<this->player<<endl;     
	cout<<"打擊次數："<<this->fires<<endl;
	cout<<"安打次數："<<this->safes<<endl;
}
	
int main()
{
	Baseball b;                
	Baseball *b1=new Baseball;    //以指標方式宣告物件b1
	b.setplayer("蔡豐安",217,62);
	b1->setplayer("郭一峰",115,20);  //宣告物件b並帶入資料成員初始值
	
	b.showplayer();
	b1->showplayer();
    
    return 0;	
}		
