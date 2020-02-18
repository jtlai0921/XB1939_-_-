#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    int a = 3, b = 4, c=5,d=6,e=7; //宣告a、b、c、d以及e的值
    
    a+=(++b/2)*c--*(d+e); 
    
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "c = " << c <<endl;
    cout << "d = " << d <<endl;
    cout << "e = " << e <<endl;
    
    return 0;
}

