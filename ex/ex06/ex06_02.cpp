#include <iostream>	
#include <string>	
using namespace std;	
int main()
{
	string s1, s2;
	cout << "�п�Js1�G";
	getline(cin, s1);
	cout << "�п�Js2�G";
	getline(cin, s2);	

	if(s1 == s2)	
		cout << "s1 �P s2 �r�ꤺ�e�ۦP";
	else
		cout << "s1 �P s2 �r�ꤺ�e���ۦP"<<endl ;
		

	return 0;
}
