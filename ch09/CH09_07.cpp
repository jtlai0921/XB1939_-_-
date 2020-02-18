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
        Time()  {  cout<<"[ノ⊿Τま计篶ミTimeン]"<<endl;  }  
        //ノ⊿Τま计篶ㄓミt1ン
        Time(int h,int m,int s) 
        { 
            cout<<"[ノΤま计篶ミTimeン]"<<endl;  
            hour = h;  
            minute = m;  
            second = s;  
        }  //ノΤま计篶ㄓミt2ン
    void setTime(int h,int m,int s)  
    {  
        hour = h; 
        minute = m;  
        second = s;  
    }   //ノsetTimeよ猭ㄓ砞﹚t1㎝t2丁
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
  
    cout<<"t1丁琌"<<t1.getHour()<<":"<<t1.getMinute()<<":"<<t1.getSecond()<<endl;  
    cout<<"t2丁琌"<<t2.getHour()<<":"<<t2.getMinute()<<":"<<t2.getSecond()<<endl;  
  
    return 0;
}
