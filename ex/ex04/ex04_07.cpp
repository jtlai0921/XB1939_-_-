#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x, y;
    for(y = 1; y < 10; y++)
    {
        for(x = 1; x < 10; x++)
        {
            if(x == y)
                cout<<"*";
            else
                if(x == 10 - y)
                    cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }
 
    
    return 0;
}
