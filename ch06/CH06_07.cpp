#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   
    int A[2][2][2]={{{1,2},{5,6}},{{3,4},{7,8}}};
 
    int i,j,k;
		
    for(i=0;i<2;i++)	   		//�~�h�j�� 
        for(j=0;j<2;j++)		// ���h�j�� 
            for(k=0;k<2;k++)	// ���h�j�� 
                cout<<"A["<<i<<"]["<<j<<"]["<<k<<"]="<<A[i][j][k]<<endl;
                //�C�X�T���}�C��������  
           
   return 0;
}

