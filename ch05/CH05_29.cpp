#include <iostream>
#include <cstdlib>
#define NEWLINE putchar('\n') //�w�q�������O 
using namespace std;

int main()
{
    #define DIVIDE cout<<"********"<<endl //�w�q�������O  
    DIVIDE;
    cout<<"���D��r"<<endl;
    DIVIDE;
    #undef DIVIDE //�Ѱ����� 
    NEWLINE;
    #define DIVIDE cout<<"--------"<<endl
    DIVIDE;
    cout<<"���D��r"<<endl;
    DIVIDE;
    #undef DIVIDE //�Ѱ����� 

    return 0;
}
