#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    cout<<"印出英文大寫文字母:"<<endl;
    for(i=65; i<=90;i++)
    {
         putchar(i);
         cout<<" ";
    }
    cout<<endl;
    
    
    return 0;
}
