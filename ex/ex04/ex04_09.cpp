#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num, max = 0, input, i;

    cout<<"�аݿ�J���ƥءG";
    cin>>num;
    if(num < 0)
        cout<<"�����j��0"<<endl;
    else
    {
        for(i = 0; i < num; i++)
        {
            cout<<">";
            cin>>input;
            if(max < input)
                max = input;
        }
        cout<<"�̤j�ȡG"<<max<<endl;
    }
    
    
    return 0;
}
