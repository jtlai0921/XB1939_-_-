#include <iostream>
#include <cstdlib> 
using namespace std;

int Factorial( int );  //���h�B��A�ϥλ��j�A�íp�⻼�j���� 
 
int main()
{
    int number, answer;
 
    cout<<"�п�J�ƭȨD�����G" ;
    cin>>number;
    answer = Factorial(number);
    cout<<number<<"!="<<answer;

    return 0;
}

 //�޼ơGnumber���w�ƭȶi�涥���B�� 
 //�Ǧ^�ȡG�����B�⵲�G 
 int Factorial( int number )
 {
    static int count = 1;//�ŧi��static�ܼ�  
    if ( number > 1 )
    {
        count++;
        return number*Factorial(number-1);
    }
    else
    {
        cout<<"���j���ơG"<<count<<endl;
        return 1;
    }
 }
