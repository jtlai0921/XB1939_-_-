#include <iostream>
#include <cstdlib>
using namespace std;

struct Time		
{
	int hour;	
	int minute;
	int second;	
};

int main()
{
	Time nowtime;	
	nowtime.hour = 10;	
	nowtime.minute = 23;	
	nowtime.second = 45;	

	cout << "�{�b���ɶ����G";
	cout << nowtime.hour << ':' ;	
	cout << nowtime.minute << ':' ;
	cout << nowtime.second << " AM";	
	cout << endl;
	
	return 0;
}
