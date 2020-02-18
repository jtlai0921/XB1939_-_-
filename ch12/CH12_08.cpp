#include <iostream>                           
#include <cstdlib>  
using namespace std;
  
template <class T, int N> // �ŧi�˪��Φ��Ѽ� T�A��ƫ��A�T�w�Ѽ� N
class CalAdd              // �ŧi�˪����O CalAdd 
{
	private:
        T Total;        // �ŧi�˪��Φ��Ѽ� T ���ܼ� Total
		T Num[N];       // �ŧi�˪��Φ��Ѽ� T ���}�C Num[]
	  
    public:
        CalAdd() { Total=0; }   // CalAdd ���O���غc���

		void InNum(void);
		void AddNum(void);
		void ShowResult(void);
};

template <class T, int N> void CalAdd<T, N> :: InNum(void)  // ������� InNum()
{     // �N��J��Ʀs�J�}�C Num[] ��
    for (int count=0; count < N; count++)
	{
		cout << "��J���:";
		cin >> Num[count];
	}
}

template <class T, int N> void CalAdd<T, N> :: AddNum(void)  // ������� AddNum()
{   // �p��}�C Num[] �������`�M
	for (int count=0; count < N; count++)
		Total+=Num[count];
}

template <class T, int N> void CalAdd<T, N> :: ShowResult(void)  // ������� ShowResult()
{   // ��ܭp�⵲�G
    AddNum();                                  
    for (int count=0; count < N; count++)
    {
        cout << Num[count];
        if ( count < (N-1) ) cout << " + ";
    }

    cout << " = " << Total << endl;
}

int main()
{ 
    CalAdd<int, 4> iCal; //�ϥμ˪����O CalAdd �ŧi int ��ƫ��A���� iCal
    CalAdd<double, 3> dCal; //�ϥμ˪����O CalAdd �ŧi double ��ƫ��A���� dCal

    cout << "<�p�� 4 �� int ��ƫ��A���`�M>" << endl;
    iCal.InNum();
    iCal.ShowResult();  // ��� iCal �p�⵲�G

    cout << "<�p�� 3 �� double ��ƫ��A���`�M>" << endl;
	dCal.InNum();
	dCal.ShowResult();   // ��� dCal �p�⵲�G
	 
    return 0;
}
