#include<iostream>
#include<cstdlib>
using namespace std;
//��ƭ쫬�ŧi
void rect_display(int,int);

int main()
{	
	int w, h,rect_area;
    //��ƩI�s
	//�]�w��J�e�P�����Ʀr
	cout<<"�п�J�e:";
	cin>>w;
	cout<<"�п�J��:";
    cin>>h;
    rect_display(w,h);//���ݭn�Ǧ^�Ȫ���ƩI�s 
    
	return 0;
}

void rect_display(int x,int y)
{   
	int i,j;
	//�]�w�Ʀr���o���p�󵥩�s
	if(x<=0 || y<=0)
	{ 
		cout<<"�Ʀr���i�p�󵥩�s"<<endl;
		return ;
	}
	//�]�w��X���榡
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
		    cout<<"*";
		}
		cout<<endl;
	}
	    return ;
} //�e�X����ιϧΪ���� 
