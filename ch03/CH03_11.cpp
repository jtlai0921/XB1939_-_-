#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    int a = 3, b = 4, c=5,d=6,e=7; //�ŧia�Bb�Bc�Bd�H��e����
    
    a+=(++b/2)*c--*(d+e); 
    
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "c = " << c <<endl;
    cout << "d = " << d <<endl;
    cout << "e = " << e <<endl;
    
    return 0;
}

