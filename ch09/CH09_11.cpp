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
            cout << "�ǥ;Ǹ��G" << this->StuID << endl; 
            cout << "�`���O" << (*this).Score_T << "��" << endl;
            cout << "this���Ы��V����}�G" << this << endl;     //���this���Ы��V����}
       }
};
int main()
{
    Student stud(920101,80,90); 
    cout << "stud���󪺦�}�G" << &stud << endl;  //���Student���O����stud����}	

    return 0;
}
