#include<iostream>
#include<cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    int i, j;    // �w�q����ܼ� i �P j
    while (true)         // �L�a�j��
    {            // �Ĥ@�h for �j��
        for (i=1; i<=9; i++)
        {
            for (j=1; j<=9; j++) // �ĤG�h for �j��
            {
            cout << j << "*" << i << "=" << i*j << " ";  // ��X�E�E���k��
            if ((i*j) < 10) cout << " ";   // �����X���վ�
                if (kbhit()) goto pro_end; // �IĲ���@��h���� pro_end ����
            }
            cout << endl;	  // ����
        }
    }
    pro_end:  // pro_end �ЦW
    cout << endl << "�����E�E���k�����!";
       
    cout<<endl;
       
    return 0;
}

