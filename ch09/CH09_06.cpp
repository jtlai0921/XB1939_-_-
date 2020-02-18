#include <iostream>
#include <cstring>
using namespace std;
	
class Baseball
{
	private:
	    char player[20];            //ゴ阑﹎   
	    int fires;                  //ゴ阑Ω计	int safes;                 
        int safes; //ゴ计
	
	public:
	    void showplayer();   
	    //篶ㄧ计 
	    Baseball();                     //ぃ盿把计ぇ篶
	    Baseball(char *name,int fs,int ss);   //盿把计ぇ篶
};
	
//ノ篶ㄧ计﹚戈Θ﹍
Baseball::Baseball()
{
	strcpy(player,"朝风");
	fires=68;
	safes=20;
}
//ノ肚ぇ把计﹚戈Θ﹍
Baseball::Baseball(char *name,int fs,int ss)
{
	strcpy(player,name);
	fires=fs;
	safes=ss;
}
	
void Baseball::showplayer(void)          
{
	cout<<"================================"<<endl;
	cout<<"ゴ阑"<<player<<endl;
	cout<<"ゴ阑Ω计"<<fires<<endl;
	cout<<"ゴΩ计"<<safes<<endl;
}
	
int main()
{
	Baseball b1;                //篶笆﹚﹍
	Baseball b("尝畃",115,20);//ンb盿戈Θ﹍
	b.showplayer();
	b1.showplayer();

    return 0;
}
