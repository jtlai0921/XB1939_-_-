#include <iostream>
#include <cstdlib>
using namespace std;

int  main()
{
    char arr2[50];
    int sum=0;
    cout << "�п�J�r��G";
    cin >> arr2;       //���o�ϥΪ̿�J���r��æs�J�r���}�Carr2��
    for (int i=0;i<50;i++)
    {   
        if (arr2[i]!='\0')   //�v�@�P�_�ϥΪ̩ҿ�J�r�ꪺ�U�Ӧr��
        {       //�p�G���O�r�굲���Ÿ��u\0�v
            sum++;     //sum���ȴN���W
        }else           //�Ӧp�G�O�r�굲���Ÿ�
        {              //�N���_�j��
            break;
        }
    }
    cout << "�z��J���r��@�� " << sum << " �Ӧr��\n";  //��ܭp�⵲�G
  
    return 0;
  	
}
