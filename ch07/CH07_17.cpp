#include <iostream> 
#include <cstdlib>  
using namespace std;

int main() 
{  
    int i=0;
	char str1[20] = "�ڳ��w C �y��!";
	char *str2 = "�ڤ]���R Java!";

	while(*(str1+i) != '\0')
	{
		cout << *(str1+i);
		i++;
	}
	cout << endl;
    while(*str2 != '\0')	
    {
		cout << *str2;
		str2++;
	}
   
    cout<<endl;
    
    return 0;
}
