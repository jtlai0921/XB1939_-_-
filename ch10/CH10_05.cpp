#include <iostream>
#include <cstdlib>
#include <cstring>//�ŧi���OStudent
using namespace std;

class Student
{
    public:
        int Student_Num;      //�Ǹ�
        char *Student_Name;    //�m�W
        long Name_Len;       //�m�W�r�����10	
        //Student ���O���غc�l
        Student() 
        {
            Student_Num = 0;
            Name_Len = 0;
            Student_Name = new char [Name_Len + 1];
            Student_Name[0] = '\0';
        }//�ŧiStudent���
        Student(int a, char *N)
        {
            Student_Num = a;//�Ǧ^�r�����
            Name_Len = strlen(N);//�t�m�O����϶�
            Student_Name = new char [Name_Len + 1];//�ƻs�r��
            strcpy( Student_Name, N );
        }//�ŧi�u=�v�B��l�h��
        Student& operator=(Student&);
};//�w�q�u=�v�B��l���
Student& Student::operator=(Student& Str)
{	     //����r��Name���O����϶�
    delete Student_Name;//���s�t�m�O����϶�
    Student_Name = new char [Name_Len + 1];//�ƻs�r��
    strcpy(Student_Name, Str.Student_Name); //�N����Ǧ^
    return *this;
}
int main()
{
    Student Student_A(31248,"David");
    Student Student_B; //�Q�Ρu=�v�B��l�h���ӽƻs�r��
    Student_B.Student_Name = Student_A.Student_Name;
    cout <<"A�ǥͪ��Ǹ��G" <<Student_A.Student_Num <<endl;
    cout <<"A�ǥͪ��m�W�G" <<Student_A.Student_Name <<endl;
    cout <<"�ӾǸ�34145��B�ǥͩm�W�]���G" <<Student_B.Student_Name <<endl;
  
    return 0;
}
