#include <iostream>
#include <cstdlib>
#define NEWLINE putchar('\n') //定義巨集指令 
using namespace std;

int main()
{
    #define DIVIDE cout<<"********"<<endl //定義巨集指令  
    DIVIDE;
    cout<<"標題文字"<<endl;
    DIVIDE;
    #undef DIVIDE //解除巨集 
    NEWLINE;
    #define DIVIDE cout<<"--------"<<endl
    DIVIDE;
    cout<<"標題文字"<<endl;
    DIVIDE;
    #undef DIVIDE //解除巨集 

    return 0;
}
