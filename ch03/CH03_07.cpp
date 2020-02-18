#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    int a=10, b=20, c=5;
    
    cout << (a > b && a > c)<<endl;//顯示a>b && a>c的回傳值
    cout << (a > b || a > c) <<endl;//顯示a>b ||a>c的回傳值
    cout << !(a > b) << endl;//顯示!(a>b)的回傳值
    
    return 0;
}

