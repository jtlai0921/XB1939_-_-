//break�m��
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a=1,b;
    for(a; a<=5; a++)	//�~�hfor�j�鱱��y�b��X
    {
        for(b=1; b<=a; b++)  	//���hfor�j�鱱��x�b��X
        {	
            if(b == 4)
                break;
            cout<<b;	//�L�Xb����  			
	    }		
        cout<<endl;
    }
 
    return 0;
 }

