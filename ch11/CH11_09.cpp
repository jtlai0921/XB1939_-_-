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
        ~car()  // ��¦���Ocar���Ѻc�l
        {
            cout << endl<< "car : �Ѻc�l"<< endl << endl;
        }
};

class freighter: public car
{
    public:
        freighter()  // �l�����Ofreighter���غc�l
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
    freighter* ft = new freighter();  // �إߤ@��freighter����
    delete ft;  // ����������
  
    return 0;
}
