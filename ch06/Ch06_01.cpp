#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for (int i=0;i<10;i++)
    {
        if(i==0)
            cout<<" ";      //�p�Gi����0�N��X�Ů�
        else	
            cout<<"+";     //�p�Gi������0�N��X+
        cout<<i+1;
        sum = sum + arr[i];   //�N�}�C�����C�Ӥ����֥[��sum16		 }
        cout << " = " << sum << endl;  //��X�֥[�᪺���G 
    }    
      return 0; 
}
