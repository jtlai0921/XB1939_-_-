#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float sigma;
    int n, k;

    cout<<"�п�Jk�ȡG";
    cin>>k;
    for(n = 0; n <= k; n++)
    {
        if(n & 1)
            sigma += (float)-1/(2*n+1);
        else
            sigma += (float)1/(2*n+1);
    }
    cout<<"PI = "<<sigma*4<<endl;
    
    
    return 0;
}
