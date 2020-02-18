#include <iostream>
#include <cstring>
using namespace std;	
//定義類別Fires
class Fires
{
    int fires;     //打擊次數
		
	public:
		//宣告建構子函數
		Fires(int fs)
		{
			fires=fs;
		}
		//宣告一個夥伴函數，傳入Fires的物件
		friend int getfires(Fires obj)
		{
			return obj.fires;  //傳回物件的資料成員
		}
};
	
	//定義類別Player
class Player
{
    char player[20];    //打擊者姓名
	public:
		//宣告建構子函數
		Player(char *name)
		{
			strcpy(player,name);
}	
	    
		//宣告函數成員showplayer，以類別Fires的物件作為傳入之參數
		void showplayer(Fires obj)
		{
			cout <<"打擊者："<<player<<endl;
			cout <<"打擊次數："<<getfires(obj)<<endl;
		}
};

int main()
{
		Player P("朱鴻森");
		Fires F(206);
     	P.showplayer(F);
     	
        return 0;
}
