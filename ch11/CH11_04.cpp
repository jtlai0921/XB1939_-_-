#include <iostream>
#include <cstdlib>
using namespace std;

class car 
{
    public:       // 基礎類別的成員函式宣告仍是public
        void go() // car類別的成員函數go()
        {
            cout << endl<< "car : 出發"<< endl << endl;
        }
};

class freighter: protected car {};  // 衍生函式將基礎類別的繼承方式宣告為protected

int main()
{
    car cr;
    freighter ft;
    cr.go();       // 呼叫基礎類別中宣告為public的成員函式go()
    //ft.go();       // 不可呼叫衍生函數中已被轉換為private的成員函數go()

    return 0;
}
