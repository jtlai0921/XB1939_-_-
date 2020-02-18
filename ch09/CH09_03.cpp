#include <iostream> 
#include <cstring> 
using namespace std;  

struct Data 
{  
    char Name[10]; 
    int height;  
};  
class Date  
{  
  private:  
    int year; 
    int month;  
    int day; 
  public:  
    void setDate(int y,int m,int d)
    {  
        year = y; 
        month = m; 
        day = d; 
    }  
    int getYear(){ return year; }  
    int getMonth(){ return month; }  
    int getDay(){ return day; }  
};  
class Person  
{  
  private:  
    Date birthday;  
    Data data;  
  public:  
    void setAllData(Date d1,Data d2)  
    {  
        birthday.setDate(d1.getYear(),d1.getMonth(),d1.getDay()); 
        strcpy(data.Name,d2.Name);  
        data.height = d2.height;  
    }  
    void printAllData()  
    {  
        cout<<"姓名: "<<data.Name<<endl;  
        cout<<"身高: "<<data.height<<endl;  
        cout<<"生日: "<<birthday.getYear()<<","<<birthday.getMonth()<<","<<birthday.getDay()<<endl;  
    }  
};  
int main()  
{  
    Date d1;  
    d1.setDate(1970,10,10);  
    Data d2;  
    d2.height = 175;   
    strcpy(d2.Name,"王建民");  
    Person p;  
    p.setAllData(d1,d2);  
   	p.printAllData(); 
       
    return 0; 
}
