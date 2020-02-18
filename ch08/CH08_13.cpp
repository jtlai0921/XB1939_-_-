#include <iostream>
#include <cstdlib>
using namespace std;

struct student
{
    char name[10];
    float Eng;
    float Chi;
    float Math;
}; //定義結構 ,這個student結構為全域性的結構型態

void calculate(struct student);//結構變數傳值呼叫函數原型宣告 

int main()
{
   
    struct student stud={"林弘生",80,60,97};
    // 定義並設定結構初始值      
    cout<<stud.name<<"的原始成績 英文:"<<stud.Eng
    <<"國文:"<<stud.Chi<<"數學:"<<stud.Math<<endl;  
    calculate(stud);// 呼叫函數 
    cout<<stud.name<<"的最後成績 英文:"<<stud.Eng
    <<"國文:"<<stud.Chi<<"數學:"<<stud.Math<<endl;
    cout<<"------------------------------------------------"<<endl;
   
    return 0;
}

void calculate(struct student s1)// 定義calculate()函數  
{
    s1.Eng=s1.Eng*1;
    s1.Chi=s1.Chi*1.3;
    s1.Math=s1.Math*1; 
    // 輸出成員姓名字串及各科成績 
    cout<<"------------------------------------------------"<<endl;
    cout<<s1.name<<"的加成成績 英文:"<<s1.Eng
    <<"國文:"<<s1.Chi<<"數學:"<<s1.Math<<endl;    
}
