#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

  //抽象基礎類別mainclass
class mainclass
{
    public:
        //純虛擬函數getweight()：以float型態回傳
        virtual float getweight() = 0;
        //函數change()：公克轉換盎司
        float change()
        {
            return float(getweight()/28);
        }
};

//衍生類別g_to_oz（公克換算盎司）以public型態繼承
class g_to_oz: public mainclass
{
    protected:
        float g;                                         //公克
    public:
        //函數g_to_oz()：設定公克值
        g_to_oz(float a)
        {
            g = a;
        }
        //虛擬函數getweight()：傳回公克值
        float getweight()
        {
            return g;
        }
};

//衍生類別Kg_to_pd（公斤換算磅）以public型態繼承
class Kg_to_pd: public mainclass
{
    protected:
        float Kg;                                       //公斤
    public:
        //函數Kg_to_pd()：設定公斤值
        Kg_to_pd (float b)
        {
            Kg = b;
        } 
        //虛擬函數getweight()：傳回公斤值並做先期運算
        float getweight() 
        {
            return float(Kg*1000/16);
        } 
};
int main()
{
    cout <<"度量衡換算表" <<"    " <<"1盎司等於28克" <<endl;
    cout<<"-------------------------------------------"<<endl;
    g_to_oz object1(4321);
    cout <<"4321克等於" <<object1.change() <<"盎司" <<endl;
    cout <<"度量衡換算表" <<"    " <<"1磅等於16盎司" <<endl;
    cout<<"-------------------------------------------"<<endl;
    Kg_to_pd object2(43);
    cout <<"43公斤等於" <<object2.change() <<"磅" <<endl;
      
    return 0;
}
