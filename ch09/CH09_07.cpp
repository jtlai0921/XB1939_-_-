#include <iostream>  
#include <cstdlib> 
using namespace std;

class Time  
{  
    private:  
        int hour;  
        int minute;  
        int second;  
    public:  
        Time()  {  cout<<"[利用沒有引數的建構子建立Time物件]"<<endl;  }  
        //利用沒有引數的建構子來建立t1物件
        Time(int h,int m,int s) 
        { 
            cout<<"[利用有引數的建構子建立Time物件]"<<endl;  
            hour = h;  
            minute = m;  
            second = s;  
        }  //利用有三個引數的建構子來建立t2物件
    void setTime(int h,int m,int s)  
    {  
        hour = h; 
        minute = m;  
        second = s;  
    }   //利用setTime方法來設定t1和t2的時間
    int getHour(){ return hour; }  
    int getMinute(){ return minute; }  
    int getSecond(){ return second; }  
};  
int main()  
{  
    Time t1;  
    Time t2(10,20,30);  
    t1.setTime(12,12,12);  
    t2.setTime(8,10,25);  
  
    cout<<"t1的時間是"<<t1.getHour()<<":"<<t1.getMinute()<<":"<<t1.getSecond()<<endl;  
    cout<<"t2的時間是"<<t2.getHour()<<":"<<t2.getMinute()<<":"<<t2.getSecond()<<endl;  
  
    return 0;
}
