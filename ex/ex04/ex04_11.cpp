#include <iostream>                                
#include <cstdlib>

using namespace std;
 
int main()
{
	 int Mul_1, Mul_2;                                 // �w�q����ܼ� Mul_1�BMul_2
	 
     for (Mul_1=1; Mul_1 <= 9; Mul_1++)                // �Ĥ@�h for �j�� 
	 {                                                 // ����ܼ� Mul_1 �@������
		 for (Mul_2=2; Mul_2 <= 9; Mul_2++)            // �ĤG�h for �j��
		 {                                             // ����ܼ� Mul_2 �@���Q����
             //��ܰT���P�B�⵲�G�C 
		 	 cout << Mul_2 << '*' << Mul_1 << '=' << Mul_2*Mul_1 << ' ';

			 //�ۭ��᪺�ƭȭY�u���Ӧ�ơA�h��X�ťզr���A�վ��X�C 
			 if ( Mul_1*Mul_2 < 10 ) cout << ' ';  
		 }

		 cout << endl;                             // ����
	 }	 
	 
	 
	 return 0;
}
