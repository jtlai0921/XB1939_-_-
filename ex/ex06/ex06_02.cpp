#include <iostream>	
#include <string>	
using namespace std;	
int main()
{
	string s1, s2;
	cout << "請輸入s1：";
	getline(cin, s1);
	cout << "請輸入s2：";
	getline(cin, s2);	

	if(s1 == s2)	
		cout << "s1 與 s2 字串內容相同";
	else
		cout << "s1 與 s2 字串內容不相同"<<endl ;
		

	return 0;
}
