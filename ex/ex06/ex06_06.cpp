#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	int ini, max;	
	char days[7][7] = { "�P���@", 
			    "�P���G",
			    "�P���T",
			    "�P���|",
			    "�P����",
			    "�P����",
			    "�P����", };	

	cout << "��J���몺�`�ѼơG"; cin >> max;	
	cout << "�W��̫�@�ѬP���X�G"; cin >> ini;	
	cout << endl;
	for(int i=0; i<=6; i++)
		cout << days[i] << '\t';	
	cout << endl;

	for(int j=1; j<=ini; j++)	
		cout << setw(4) << '\t';
	for(int k=1; k<=max; k++)	
	{
		cout << setw(4) << k;	
		if((k+ini) % 7 != 0)
			cout << '\t';	
		else
			cout << '\n';	
	}
	cout<<endl;

	return 0;
}
