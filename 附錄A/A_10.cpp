#include<iostream>
#include<cstdlib>
#include<cctype>//�ޥΦr���B�z��ƪ��Y��

using namespace std;

int main()
{
	char ch1;
 	
  	cout<<"�п�J���@�r��";
  	cout<<"(��J�ť��䬰����):";
 	//Ū���r��
  	cin.get(ch1);
  	cout<<endl;
  	//�r������
  	if(isalpha(ch1))
    {
     	cout<<ch1<<"�r�����r��"<<endl;
     	if(islower(ch1))
       		cout<<"�N�r���ন�j�g:"<<(char)toupper(ch1)<<endl;
  		else
  			cout<<"�N�r���ন�p�g:"<<(char)tolower(ch1)<<endl;   		
	}
	//�Ʀr����
	else if(isdigit(ch1))
  	{
    	cout<<ch1<<"�r�����Ʀr"<<endl;
    }
    //��L�Ÿ�����
    else if(ispunct(ch1))
    	cout<<ch1<<"�r�����Ÿ�"<<endl;
  	
	return 0;
}
