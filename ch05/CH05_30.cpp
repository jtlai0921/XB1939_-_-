#include <iostream>
#include <cstdlib>
using namespace std;

#define Use_MACRO 1  

#if Use_MACRO ==1
    #define MAX(a,b) (a>b? a:b)
#endif

int main()
{
    int x, y;
    cout<<"�п�J��ƭȶi��j�p���:";
    cin >> x >> y;     // ����ܼ� x �P y �x�s��J��
    cout << x << " �P " << y << " �������j�ȬO " << MAX(x, y);   // ��ܵ��G�T��
    cout << endl;            // ����

    return 0;
}
