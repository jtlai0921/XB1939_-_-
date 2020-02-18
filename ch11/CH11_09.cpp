#include <iostream>
#include <cstdlib>
using namespace std;

class car 
{
    public:
        car()   // 基礎類別car的建構子
        {
            cout << endl<< "car : 建構子"<< endl;
        }
        ~car()  // 基礎類別car的解構子
        {
            cout << endl<< "car : 解構子"<< endl << endl;
        }
};

class freighter: public car
{
    public:
        freighter()  // 衍生類別freighter的建構子
        {
            cout << endl<< "freighter : 建構子"<< endl;
        }
        ~freighter() // 衍生類別freighter的解構子
        {
            cout << endl<< "freighter : 解構子"<< endl;
        }
};

int main()
{
    freighter* ft = new freighter();  // 建立一個freighter物件
    delete ft;  // 結束此物件
  
    return 0;
}
