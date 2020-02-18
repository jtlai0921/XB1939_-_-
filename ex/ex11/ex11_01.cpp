#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

  //�ŧi��¦���OMath
  class Math
  {
     private:
       int Math_Score;                             //�ƾǦ��Z
     public:
       //���Math_make()�G�]�w�ƾǦ��Z
       void Math_make(int a) 
       {
          Math_Score = a;
       }
       //���Math_take()�G�]�w�Ǧ^�ƾǦ��Z��K�l�����O�I�s
       int Math_take()
       {
          return Math_Score;
       }
  };

  //�ŧi��¦���OChinese
  class Chinese
  {
     private:
       int Chinese_Score;                             //��妨�Z
     public:
       //���Chinese_make()�G�]�w��妨�Z
       void Chinese_make(int b)
       {
          Chinese_Score = b;
       }
       //���Chinese_take()�G�]�w�Ǧ^��妨�Z��K�l�����O�I�s
       int Chinese_take()
       {
          return Chinese_Score;
       }
  };

  //�ŧi��¦���OHistory
  class History
  {
     private:
       int History_Score;                             //���v���Z
     public:
       //���History_make()�G�]�w���v���Z
       void History_make(int c)
       {
          History_Score = c;
       }
       //���History_take()�G�]�w�Ǧ^���v���Z��K�l�����O�I�s
       int History_take()
       {
          return History_Score;
       }
  };

  //�ŧi���OStudent�åH�T���~������r���O�~�ӤT�Ӱ�¦���O
  class Student: public Math, protected Chinese, private History
  {
     private:
       int Student_Number;                         //�Ǹ�
     protected:
       char Student_Name[20];                      //�m�W
     public:
       //���Student()�G�]�w�Ǹ��P�m�W
       Student(int d, char *N) 
       {
          Student_Number = d;
          strcpy (Student_Name, N);
       }
       //���Student_C_make()�G�����s��Chinese_make()
       void Student_C_make(int e)
       {
          Chinese_make (e);
       }
       //���Student_H_make()�G�����s��History_make()
       void Student_H_make(int f)
       {
          History_make (f);
       }
       //��ù���ܵ��G
       void Student_Show()
       {
          cout <<endl;
          cout <<"�Ǹ��G" <<Student_Number <<endl;
          cout <<"�m�W�G" <<Student_Name <<endl;
          cout <<"�ƾǦ��Z�G    " <<Math_take() <<endl;
          cout <<"��妨�Z�G    " <<Chinese_take() <<endl;
          cout <<"���v���Z�G    " <<History_take() <<endl;
          cout <<"�`���Z�G      " << Math_take() + Chinese_take() + History_take() <<endl;
       }
  };

  //�{���D�n����ϰ�
  int main()
  {
    //���OStudent�G����object1
    Student object1(31232, "Alex");
         object1.Math_make(65);
         object1.Student_C_make(78);
         object1.Student_H_make(34);
         object1.Student_Show();
     
     
     return 0;
   }
