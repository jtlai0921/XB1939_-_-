#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int check_key=0;   // �ŧi����ܼ� check_key
    while (check_key == 1) 
        cout << "�{���i�Jwhile�j��\n";   // while �j��
    do	      
        cout << "�{���i�Jdo...while�j��\n";   
    while (check_key == 1);   // do�Kwhile �j��
	
    return 0;	
}

