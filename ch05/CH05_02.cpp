#include<iostream>
#include<cstdlib>
using namespace std;
		
//�ŧi��ƭ쫬 
void name(void);
void year(void);

int main(){
//�I�s��� 
    name();
    year();
 
    return 0;
}
void name()
{
    char name[20];
    cout<<"�п�J�A���m�W"<<endl;
    cin>>name;
    cout<<name<<"�A�n!"<<endl;
}
void year()
{
    int a;
    cout<<"�п�J�A���~��"<<endl;
    cin>>a;
    cout<<"��!�A���~"<<a<<"��"<<endl;
}
