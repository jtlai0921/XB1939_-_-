#include <iostream>
#include <cstdlib>
using namespace std;

//�D�{���϶�
int main()
{
    //�ŧi�X�ͦ~�B��B���ܼ�
    int Birth_Year;
    cout <<"�п�J�X�ͦ褸�~���G";
    cin >>Birth_Year;
	//���~�����϶�
    try
    {
	    //�ŧi����ܼ�i,j��K�B�z�⦡
	    int i = Birth_Year;
	    int j = 2008 - Birth_Year;
      
	    //�P�_�X�ͦ~���O�_�j�󤵦~
	    if (i > 2008)
        {
		    //�p�G�j�󤵦~��X���~�T���r��
		    throw 0;  
	    }
	  
	    //�P�_�~�֬O�_�j��150��
        if (j > 150)
        {
		    //�p�G�j��@�ʤ��Q�����X���~�T���r��
		    throw 1; 
        }

        //�L���~�o�ͪ����`�{���B�z���q
	    int Nor_Year = Birth_Year - 1911;
        cout <<endl <<"�z���X�ͦ~�����G����" 
            <<Nor_Year <<"�~" <<endl;          
    }

    //catch����throw��X���r��Hshow�ܼ��x�s
	catch (int i)
    { 
	   //�Hcerr�ߧY��X���~�T��show
       cout<<"��J���󤣲ŦX,�Э��s��J!"<<endl;
	}	
            
    return 0;
}
