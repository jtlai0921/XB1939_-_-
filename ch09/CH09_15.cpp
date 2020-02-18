#include <iostream>  
#include <cstdlib>  
using namespace std;

class Circle  
{  
    private:  
        const static double PI; 
        static int counter;  
        int radius; 
    public:  
    Circle(int r) 
    { 
        radius = r; 
        counter++;  
    }  
    double Area(){ return PI*radius*radius; }  
    int getCounter(){ return counter; }  
};  
const double Circle::PI = 3.1415926535;//在類別外部設定常數PI的初值
int Circle::counter = 0;  //在類別外部設定靜態資料成員counter的初值

int main() 
{  
    Circle c1(3);  
    cout<<"[c1的面積] = "<<c1.Area()<<endl;  
    Circle c2(5);  
    cout<<"[c2的面積] = "<<c2.Area()<<endl;
    cout<<"[由c1取出counter資料]共有 "<<c1.getCounter()<<" 個圓"<<endl;  
    cout<<"[由c2取出counter資料]共有 "<<c2.getCounter()<<" 個圓"<<endl; 
  
    return 0;
}
