#include <iostream>
#include <iostream>
using namespace std;

class car 
{
    public:
        void go()   // car���O���������go
        {
            cout << endl<< "car : �X�o"<< endl;
        }
        void stop()   // car���O���������stop
        {
            cout << endl<< "car : ����"<< endl << endl;
        }
};

class freighter: public car	
{
    public:
        void stop()   // �мg�������,����~�Ӧ�car���O��������ƫh�|�Q���N
        {
            cout << endl<< "freighter : ����"<< endl << endl;
        }
};

int main()
{
    freighter ft;
    ft.go();      // �o�̰��檺���O�Ѱ�¦���Ocar���~�ӦӨӪ��������
    ft.stop();    // �o�̰��檺�O�мg�᪺�������,�Ӥ��O�Ѱ�¦���Ocar�~�ӦӨӪ��������

    return 0;
}
