//break½m²ß
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a=1,b;
    for(a; a<=5; a++)	//¥~¼hfor°j°é±±¨îy¶b¿é¥X
    {
        for(b=1; b<=a; b++)  	//¤º¼hfor°j°é±±¨îx¶b¿é¥X
        {	
            if(b == 4)
                break;
            cout<<b;	//¦L¥Xbªº­È  			
	    }		
        cout<<endl;
    }
 
    return 0;
 }

