#include <iostream>    // �t�A���Y�� <iostream> 
#include <cstdlib>   
using namespace std;

template <class T>   // �ŧi�˪��Φ��Ѽ� T 
T Add_Array(T *ray) // �ŧi�˪���� Add_Array() 
{
    T Total=0;      // �w�q�˪��Φ��Ѽ� T ���ܼ� Total 

	for (int count=0; count < 5; count++) // �p��}�C�`�M
	    Total+=*(ray+count);

	return Total;  // �Ǧ^�`�M
}

int main()
{
    int i_ray[5]={ 10, 20, 30, 40, 50 };   // �w�q��ư}�C i_ray
	double d_ray[5]={ 40.5, 33.44, 57.65, 89.77, 99.0 };   // �w�q double �}�C d_ray

	cout << "i_ray[] ���������`�M="
	    << Add_Array(i_ray);   // �I�s Add_array�A�ǤJi_ray[]�}�C
	cout << endl;

	cout << "d_ray[] ���������`�M="
	    << Add_Array(d_ray);   // �I�s Add_array�A�ǤJd_ray[]�}�C
	cout << endl;
	 
	return 0;
}
