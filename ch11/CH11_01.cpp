#include <iostream>
#include <cstdlib>
using namespace std;

class car 
{
    public:       // ��¦���O���������禡�ŧi��public 
        void go()      // car���O���������go()
        {
            cout << endl<< "car : �X�o"<< endl;
        }
        void stop()  // car���O���������stop()
        {
            cout << endl<< "car : ����"<< endl << endl;
        }
};

class freighter: public car{};   // �l�����O�N��s���]�w�r���ŧi��public

int main()
{
    freighter ft;
    ft.go();    // ft�Ofreighter���O���@�Ӫ���,�]���~�����Y,�ҥH�i�H�ϥ�go()�Pstop()���
    ft.stop();
 
    return 0;
}
