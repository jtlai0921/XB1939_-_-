#include <iostream>
#include <cstdlib>
using namespace std;

class car
{
    public:
        car()   // ��¦���Ocar���غc�l
        {
            cout << endl<< "car : �غc�l"<< endl;
        }
        virtual ~car()   // �ŧi��¦���Ocar���Ѻc�l�� "�����Ѻc�l"
        {
            cout << endl<< "car : �Ѻc�l"<< endl << endl;
        }
};

class freighter: public car 
{
    public:
        freighter() : car()      // �l�����Ofreighter���غc�l
        {
            cout << endl<< "freighter : �غc�l"<< endl;
        }
        virtual ~freighter()// �l�����Ofreighter���Ѻc�l (��virtual����r�i�ٲ�)
        {
            cout << endl<< "freighter : �Ѻc�l"<< endl;
        }
};

int main()
{
    car* myFreighter = new freighter();  // �ϥ�new�B��l�ʺA�t�m�O����H�إߤ@��	   
    // freighter����ë��w����¦���Ocar������
    delete myFreighter;  // �M���ʺA�t�m���O����H�����l�����O������

    return 0;
}
