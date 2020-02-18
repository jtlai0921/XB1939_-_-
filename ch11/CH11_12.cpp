#include <iostream>
#include <cstdlib>
using namespace std;

class car 
{      // 基礎類別car
    public:
        car()  // 基礎類別car的建構子
        {
            cout << endl<< "car : 建構子"<< endl;
        }
        ~car() // 基礎類別car的解構子,並沒有宣告成虛擬函數
        {
            cout << endl<< "car : 解構子"<< endl << endl;
        }
};

class freighter: public car
{         // 衍生類別freighter
    public:
        freighter() : car()   // 衍生類別freighter的建構子
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
    car* myFeighter = new freighter();  // 使用new運算子動態配置記憶體以建立一個	                                 
	                                    // freighter物件並指定給基礎類別car的指標
    delete myFeighter;  // 清除動態配置的記憶體以結束衍生類別的物件
  
    return 0;
}
