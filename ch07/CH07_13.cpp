#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    
    int i,j,no[2][4]={312,16,35,65,52,111,77,80};
     
    for (i = 0; i < 2; i++ )
        for ( j = 0; j < 4; j++ )
            cout<<"&no["<<i<<"]["<<j<<"]="<<&no[i][j]<<'\t'<<"*(no+"<<i<<")+"<<j<<"="<<*(no+i)+j<<endl;
			//��X�G���}�C��������}�P�Q�Ϋ��Ъ�ܰ}�C������} 
        
    return 0;
}
