#include <iostream>
#include <cstdlib>
using namespace std;

class car 
{
    public:       // ��¦���O�������禡�ŧi���Opublic
        void go() // car���O���������go()
        {
            cout << endl<< "car : �X�o"<< endl << endl;
        }
};

class freighter: protected car {};  // �l�ͨ禡�N��¦���O���~�Ӥ覡�ŧi��protected

int main()
{
    car cr;
    freighter ft;
    cr.go();       // �I�s��¦���O���ŧi��public�������禡go()
    //ft.go();       // ���i�I�s�l�ͨ�Ƥ��w�Q�ഫ��private���������go()

    return 0;
}
