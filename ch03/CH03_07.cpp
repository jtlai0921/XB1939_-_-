#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    int a=10, b=20, c=5;
    
    cout << (a > b && a > c)<<endl;//���a>b && a>c���^�ǭ�
    cout << (a > b || a > c) <<endl;//���a>b ||a>c���^�ǭ�
    cout << !(a > b) << endl;//���!(a>b)���^�ǭ�
    
    return 0;
}

