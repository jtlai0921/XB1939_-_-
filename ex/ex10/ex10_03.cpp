#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

  //�ŧi���OStudent
  class Student
  {
     public:
       char Student_Num[10];                   //�Ǹ�
       int Student_Score;                       //�`��
  //�غc�l
     Student() {}
  //Student��ơG�]�w�ǥͽs�����`��
     Student(char *a, int b)
     {
         strcpy(Student_Num,a);
         Student_Score = b;
     }
  //�h�����B��l�u>�v�B�u= =�v
      bool operator>(Student b)
      {
          if (this->Student_Score > b.Student_Score)
            return true;
          else
            return false;
      }
      bool operator==(Student c)
      {
          if (this->Student_Score == c.Student_Score)
            return true;
          else
            return false;
      }
  //�ŧi>>�B��l�h����Ƭ��B�����Y
       friend istream& operator>>(istream& input, Student& obj);
  };

  //>>�B��l�h���ŧi
  istream& operator>>(istream& input, Student& obj)
  {
       cout <<endl <<"�п�J�ǥ;Ǹ��G";
	      input >>obj.Student_Num;
	      cout <<endl <<"�п�J�ǥͤ��ơG";
       input >>obj.Student_Score;
       return input;
  }

  int main()
  {
     //�ŧi����x�Py
     Student x, y;
     //�Q�έ�ŧi��>>�B��l�h����J����x�Py�����
     cout <<"�Ĥ@�Ӿǥ�" <<endl;
     cin >>x;
     cout <<endl <<"�ĤG�Ӿǥ�" <<endl;
     cin >>y;
     
     if (x == y)
	    cout <<endl <<"�Ǹ�" <<x.Student_Num <<"�P�Ǹ�" <<y.Student_Num <<"���ƬۦP�C" <<endl;
     else
        if (x > y)
		   cout <<endl <<"�Ǹ�" <<x.Student_Num <<"���Ƥ�Ǹ�" <<y.Student_Num <<"��" <<endl;
        else
           cout <<endl <<"�Ǹ�" <<x.Student_Num <<"���Ƥ�Ǹ�" <<y.Student_Num <<"�C" <<endl;
		
	 
     return 0;
  }
