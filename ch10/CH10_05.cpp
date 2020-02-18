#include <iostream>
#include <cstdlib>
#include <cstring>//宣告類別Student
using namespace std;

class Student
{
    public:
        int Student_Num;      //學號
        char *Student_Name;    //姓名
        long Name_Len;       //姓名字串長度10	
        //Student 類別的建構子
        Student() 
        {
            Student_Num = 0;
            Name_Len = 0;
            Student_Name = new char [Name_Len + 1];
            Student_Name[0] = '\0';
        }//宣告Student函數
        Student(int a, char *N)
        {
            Student_Num = a;//傳回字串長度
            Name_Len = strlen(N);//配置記憶體區塊
            Student_Name = new char [Name_Len + 1];//複製字串
            strcpy( Student_Name, N );
        }//宣告「=」運算子多載
        Student& operator=(Student&);
};//定義「=」運算子函數
Student& Student::operator=(Student& Str)
{	     //釋放字串Name的記憶體區塊
    delete Student_Name;//重新配置記憶體區塊
    Student_Name = new char [Name_Len + 1];//複製字串
    strcpy(Student_Name, Str.Student_Name); //將物件傳回
    return *this;
}
int main()
{
    Student Student_A(31248,"David");
    Student Student_B; //利用「=」運算子多載來複製字串
    Student_B.Student_Name = Student_A.Student_Name;
    cout <<"A學生的學號：" <<Student_A.Student_Num <<endl;
    cout <<"A學生的姓名：" <<Student_A.Student_Name <<endl;
    cout <<"而學號34145的B學生姓名也為：" <<Student_B.Student_Name <<endl;
  
    return 0;
}
