#include<iostream>
#include<cstdlib>

using namespace std;
//�ŧi��ƭ쫬
int sum(int,int);//��ƭ쫬�ŧi

int main()
{
    
    int x,y;
    cout<<"�п�J��즨�Z: ";
    cin>>x>>y;
    cout<<"��즨�n�`�M="<<sum(x,y)<<endl;//�I�s�ÿ�X��Ƶ��G 
  
    return 0;
}
//��Ʃw�q����
int sum(int score1,int score2)
{   
    int total;
    total=score1+score2;
    
    return total; 
}
