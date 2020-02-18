#include <iostream>
#include <cstdlib>
using namespace std;

//宣告基礎類別baseclass
class baseclass 
{  
    public:
    //宣告public區塊變數a
        int a;
    //宣告main_get()函數存取a值
        void main_get(int w) 
        {
            a = w;
        }
};

//宣告第一層衍生類別sub1並以虛擬public型態繼承baseclass
class sub1: virtual public baseclass
{
    public:
    //宣告public區塊變數b
        int b;
    //宣告sub1_get()函數存取b值
        void sub1_get(int x)
        {
            b = x;
        }
};

//宣告第一層衍生類別sub2並以虛擬public型態繼承baseclass
class sub2: virtual public baseclass
{
    public:
    //宣告public區塊變數c
        int c;
    //宣告sub2_get()函數存取c值
        void sub2_get(int y)
        {
            c = y;
        }
};

//宣告第二層衍生類別sub3並以public型態分別繼承sub1及sub2
class sub3: public sub1, public sub2
{
    public:
    //宣告public區塊變數d
        int d;
    //宣告sub3()函數存取d值
        sub3(int z)
        {
            d = z;
        }
    //宣告show()函數將資料輸出至螢幕
        void show()
        {
           cout <<"基礎類別baseclass中變數a的值為  " <<a <<endl;
           cout <<"第一層衍生類別sub1變數b的值為   " <<b <<endl;
           cout <<"第一層衍生類別sub2變數c的值為   " <<c <<endl;
           cout <<"第二層衍生類別sub3變數d的值為   " <<d <<endl;
           cout <<"所有變數相加" <<a <<"+" <<b <<"+" <<c <<"+" <<d;
           cout <<"=" <<a+b+c+d <<endl;
        }
};

int main()
{
//宣告衍生類別sub3的物件object3，並利用object3物件對其他類作存取動作
    sub3 object3(4);
    object3.main_get(1);
    object3.sub1_get(2);
    object3.sub2_get(3);
    object3.show();
     
    return 0;
}
