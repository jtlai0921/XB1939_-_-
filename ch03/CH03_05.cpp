#include <iostream>

using namespace std;

int main()
{
    int a=5, b=10, c=15;
    //�ŧi��ƫ��A���ܼ�a�Bb�Bc�A�åB���O�]�w�ܼƪ���l��
    a+=8;
    cout << a << endl;
    a-=b;
    cout << a << endl; 
    c*=(b+2);
    cout << c <<endl;
    c%=7;
    cout << c <<endl;

    return 0;
}

