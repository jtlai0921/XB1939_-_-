#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num, max = 0, input, i;

    cout<<"請問輸入的數目：";
    cin>>num;
    if(num < 0)
        cout<<"必須大於0"<<endl;
    else
    {
        for(i = 0; i < num; i++)
        {
            cout<<">";
            cin>>input;
            if(max < input)
                max = input;
        }
        cout<<"最大值："<<max<<endl;
    }
    
    
    return 0;
}
