#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int input = 0;     
    bool replay = false;     
    do {        
        cout << "��J��ƭȡG";
        cin >> input;        
        cout << "��J�Ƭ��_�ơH" << ((input % 2) ? 'Y': 'N') <<endl;
        cout << "�~��(1:�~�� 0:����)�H";
        cin >> replay;     
    } while(replay);   //do while�j��      
	
	return 0;	
}

