#include <iostream>
#include <cstdlib>
using namespace std;

void showArray(int, int, int);	//�ŧi��ƭ쫬

int main()
{
	int source[3] = {5, 9, 3};	//�ŧi�ð_�lsource�}�C
	int target[3];	//�ŧitarget�}�C

	cout << "�ƻs�e\n";
	for (int i=0; i<=2; i++)	//��X�}�C�j��
		showArray(i, source[i], target[i]);	//�I�sshowArray���

	for (int j=0; j<=2; j++)	//�ƻs�j��
	{
		target[j] = source[j];	//�ƻssource��target
	}

	cout << "\n�ƻs��\n";
	for (int k=0; k<=2; k++)	//��X�}�C�j��
		showArray(k, source[k], target[k]);	//�I�sshowArray���

	for (int l=0; l<=2; l++)	//�M���j��
	{
		target[l] = 0;	//�M��target
	}

	cout << "\n�M��target��\n";
	for (int m=0; m<=2; m++)	//��X�}�C�j��
		showArray(m, source[m], target[m]);	//�I�sshowArray���
		

	return 0;
}

void showArray(int index, int s, int t)	//��X��ƨ��
{
	cout << "source[" << index << "] = " << s << '\t';	//��X�Ѽ�s��
	cout << "target[" << index << "] = " << t << endl;	//��X�Ѽ�t��
}
