#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX(a, b) (a>b?a:b)   // #define ���O�w�q���� MAX(a, b)

int main()
{
    int x, y;    // �w�q����ܼ� x, y
    cout << "��J�Ĥ@�Ӽƭ�:";
    cin >> x;                      // ���o�ܼ� x ����
    cout << "��J�ĤG�Ӽƭ�:";
    cin >> y;                      // ���o�ܼ� y ����
    cout << "��Ƥ������j�ȬO:" << MAX(x, y) << endl;    // MAX(x, y) ���X���j��
    
    return 0;
}
