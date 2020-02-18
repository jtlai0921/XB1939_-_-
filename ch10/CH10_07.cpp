#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//�ŧi���OStudent

class Student
{
    public:
        char *Student_Name;  //�ǥͩm�W
        long Name_Len;    //�r�����
        int Str_Num;   //�r���s��
        //�غc�l
        Student()
        {
            Name_Len = 0;
            Student_Name = new char [Name_Len + 1];
            Student_Name[0] = '\0';
        }//Student��ơG�]�w�ǥͩm�W
        Student(char *N)
        {
            Name_Len = strlen(N);
            Student_Name = new char [Name_Len + 1];
            strcpy(Student_Name, N);
        }//�h���u[]�v�B��l
        char operator[](int In_Num);//�ŧi>>�B��l�h����Ƭ��B�����Y
        friend istream& operator>>(istream& input, Student& obj);
};//�h���u[]�v�B��l�ŧi���e
 
char Student::operator[](int In_Num)
{
    //�YIn_Num�ȶW�L�r����סA�h�NIn_Num�ȳ]��Name_Len -1
    if (In_Num >= Name_Len)
    {
        In_Num = Name_Len - 1;
    }//�YIn_Num�Ȥp��0�A�h�NIn_Num�ȳ]��0
    if (In_Num < 0)
    {
        In_Num = 1;
    }//�Ǧ^���o���r��
    return Student_Name[In_Num];
}
//>>�B��l�h���ŧi
istream& operator>>(istream& input, Student& obj)
{
    cout <<"�п�J�ǥͩm�W�G";
    input >>obj.Student_Name;
    cout <<endl <<"�п�J�z�Q���o�ĴX�Ӧr���G";
    input >>obj.Str_Num;
    return input;
}
int main()
{
    Student x; //�Q�έ�ŧi��>>�B��l�h����J����x�����
    cin >>x;
    cout <<endl <<"�ǥͩm�W�G" <<x.Student_Name <<endl;
    //�Q�έ�ŧi��[]�B��l�h���A��X�ҿ�ܪ��r��
    cout <<endl <<"�ǥͩm�W����" <<x.Str_Num;
    cout <<"�Ӧr�����G" <<x.Student_Name[x.Str_Num - 1] <<endl;
  
    return 0;
}
