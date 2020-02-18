#include <iostream>
#include <cstdlib>
using namespace std;

class Student    
{
    private:   
        int StuID;        
        float Score_E,Score_M,Score_T;
    public:                  
        Student(int id,float E,float M)         
        {
            StuID=id;           
            Score_E=E;         
            Score_M=M;            
            Score_T = Score_E + Score_M;
            cout << "===================" << endl;
            cout << "學生學號：" << this->StuID << endl; 
            cout << "總分是" << (*this).Score_T << "分" << endl;
            cout << "this指標指向的位址：" << this << endl;     //顯示this指標指向的位址
       }
};
int main()
{
    Student stud(920101,80,90); 
    cout << "stud物件的位址：" << &stud << endl;  //顯示Student類別物件stud的位址	

    return 0;
}
