#include <iostream>                      // �t�A���Y�� <iostream> 
#include <iomanip>                      // �t�A���Y�� <iomanip>
#include <cstdlib> 
using namespace std;

template <class Type>                  // �ŧi�˪��Φ��Ѽ� T 
class Circle                          // �ŧi�˪����O Circle 
{
      private:
		  Type radius;                // �ϥμ˪��Φ��Ѽ� T �өw�q�ܼ� radius
		  double r_Area;           // �w�q������ܼ� r_Area �x�s�ꭱ�n
		  double r_Circum;         // �w�q������ܼ� r_Circum �x�s��P��

	  public:
          Circle(Type r)        // Circle ���O���غc���
		  { 
			radius=r;
		    r_Area=area();
			r_Circum=circum();
		  }
		  double area() { return (double)(3.14*radius*radius); } // ��� area() �D�ꭱ�n
		  double circum() { return (double)(2*3.14*radius); }    // ��� circum() �D��P��
          void show(void)                                   // ��� show() ��ܦ�����
		  {
			   cout << "��b�|=" << radius << "  "
				    << "�ꭱ�n=" << r_Area<< "  "
					<< "��P��=" << r_Circum << endl;
		  }
};

int main()
{
	 //�ϥμ˪����O Circle �ŧi���� 
     Circle<int> ri(10);                          // ���� ri �� int ��ƫ��A
	 Circle<float> rf(3.5);                       // ���� rf �� float ��ƫ��A
	 Circle<double> rd(5.742);                    // ���� rd �� double ��ƫ��A

	 //�I�s������� show�A��ܸӶ��� 
	 ri.show();
	 cout<<"---------------------------------------------"<<endl;
	 rf.show();
	 cout<<"---------------------------------------------"<<endl;
	 rd.show();
	 cout<<"---------------------------------------------"<<endl;
	 
	
	 return 0;
}
