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
        Time()  {  cout<<"[�Q�ΨS���޼ƪ��غc�l�إ�Time����]"<<endl;  }  
        //�Q�ΨS���޼ƪ��غc�l�ӫإ�t1����
        Time(int h,int m,int s) 
        { 
            cout<<"[�Q�Φ��޼ƪ��غc�l�إ�Time����]"<<endl;  
            hour = h;  
            minute = m;  
            second = s;  
        }  //�Q�Φ��T�Ӥ޼ƪ��غc�l�ӫإ�t2����
    void setTime(int h,int m,int s)  
    {  
        hour = h; 
        minute = m;  
        second = s;  
    }   //�Q��setTime��k�ӳ]�wt1�Mt2���ɶ�
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
  
    cout<<"t1���ɶ��O"<<t1.getHour()<<":"<<t1.getMinute()<<":"<<t1.getSecond()<<endl;  
    cout<<"t2���ɶ��O"<<t2.getHour()<<":"<<t2.getMinute()<<":"<<t2.getSecond()<<endl;  
  
    return 0;
}
