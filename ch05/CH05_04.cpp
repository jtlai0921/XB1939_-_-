#include<iostream>
#include<cstdlib>
using namespace std;
//ㄧ计
void rect_display(int,int);

int main()
{	
	int w, h,rect_area;
    //ㄧ计㊣
	//砞﹚块糴籔计
	cout<<"叫块糴:";
	cin>>w;
	cout<<"叫块:";
    cin>>h;
    rect_display(w,h);//ぃ惠璶肚ㄧ计㊣ 
    
	return 0;
}

void rect_display(int x,int y)
{   
	int i,j;
	//砞﹚计ぃ眔单箂
	if(x<=0 || y<=0)
	{ 
		cout<<"计ぃ单箂"<<endl;
		return ;
	}
	//砞﹚块Α
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
		    cout<<"*";
		}
		cout<<endl;
	}
	    return ;
} //礶よ瓜ㄧ计 
