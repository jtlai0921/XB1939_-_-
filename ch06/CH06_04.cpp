#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    int Tel_fee[3][2]={ 2227317,1430,2253227,2850,2232081,4580 };  
     
    cout<<"-------- �q�ܸ��X�P�O�Ω��Ӫ� -------- "<<endl;
    for(i=0;i<3;i++)
    {
        cout<<Tel_fee[i][0]<<'\t'<<Tel_fee[i][1]<<endl;
        cout<<"-------------------------------------"<<endl;
    }
    //��X�q�ܸ����P�O�� 
    
    return 0;
}
