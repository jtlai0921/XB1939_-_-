#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i,j;
	int A[3][3] = {{1,3,5},{7,9,11},{13,15,17}};//�G���}�C���ŧi 
	int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};//�G���}�C���ŧi 
	int C[3][3] = {0};
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	    C[i][j]=A[i][j]+B[i][j];// �x�}C=�x�}A+�x�}B 
	
    cout<<"�x�}A���e"<<endl; 
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<A[i][j]<<'\t';
		cout<<endl;
	}
	 cout<<"�x�}B���e"<<endl; 
	 for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<B[i][j]<<'\t';
		cout<<endl;
	}
	cout<<"[�x�}A�M�x�}B�ۥ[�����G]"<<endl;	//�L�XA+B�����e
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<C[i][j]<<'\t';
		cout<<endl;
	}
	
	return 0;
}
