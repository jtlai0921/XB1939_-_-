#include <iostream>
#include <cstdlib>
using namespace std;

class car 
{      // ��¦���Ocar
    public:
        car()  // ��¦���Ocar���غc�l
        {
            cout << endl<< "car : �غc�l"<< endl;
        }
        ~car() // ��¦���Ocar���Ѻc�l,�èS���ŧi���������
        {
            cout << endl<< "car : �Ѻc�l"<< endl << endl;
        }
};

class freighter: public car
{         // �l�����Ofreighter
    public:
        freighter() : car()   // �l�����Ofreighter���غc�l
        {
            cout << endl<< "freighter : �غc�l"<< endl;
        }
        ~freighter() // �l�����Ofreighter���Ѻc�l
        {
            cout << endl<< "freighter : �Ѻc�l"<< endl;
        }
};

int main()
{
    car* myFeighter = new freighter();  // �ϥ�new�B��l�ʺA�t�m�O����H�إߤ@��	                                 
	                                    // freighter����ë��w����¦���Ocar������
    delete myFeighter;  // �M���ʺA�t�m���O����H�����l�����O������
  
    return 0;
}
