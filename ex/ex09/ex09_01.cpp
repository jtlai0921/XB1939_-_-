#include <iostream>
#include <cstdlib>
using namespace std;
 class Student       //�ŧiStudent���O
 {
  private:                //�ŧi�p�θ�Ʀ���
       char StuID[8];          
       float Score_E,Score_M,Score_T,Score_A;
  public:                 //���θ�Ʀ���
       
       Student(){ cout<<"%%%% ����غc�l %%%%"<<endl; }
       ~Student(){ cout<<"#### ����Ѻc�l ####"<<endl; }
       
       void input_data()         //�ŧi�������
       	{
         cout << "**�п�J�Ǹ��ΦU�즨�Z**" << endl;
         cout << "�Ǹ��G";
         cin >> StuID;
         }
       	void show_data()	   //�ŧi�������
       	{
         cout << "��J�^�妨�Z�G"; //��@input_data���
       	 cin >> Score_E;
       	 cout << "��J�ƾǦ��Z�G";
         cin >> Score_M;
         Score_T = Score_E + Score_M;
         Score_A = (Score_E + Score_M)/2;
         cout << "================================" << endl;//��@show_data���
         cout << "�ǥ;Ǹ��G" << StuID << "" << endl; 
         cout << "�`���O" << Score_T << "��,�����O" << Score_A << "��" << endl;
         cout << "================================" << endl;
          }	
  };
  int main()
  {
      	Student *stud1=new Student;     //�ŧiStudent���O�����Ъ���A�éI�s�غc�l 
      	stud1->input_data();           //�I�sinput_data�������
        stud1->show_data();          
       //�I�sinput_data�������
        delete stud1;//�I�s�Ѻc�l 
       
       
       return 0;
  }
