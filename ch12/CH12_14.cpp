#include<iostream>
#include<cstdlib>
using namespace std;

void throwex()
{
    try  // �~�h��try�϶�
    {
        cout<<"�ثe�b���throwex�Ĥ@�h��try�϶���\n";
        try {  // ���h��try��
            cout<<"�ثe�b���throwex�ĤG�h��try�϶���\n";
            throw exception(); //��X�@�Өҥ~
        }
        catch(exception e)  //�����ҥ~
        {
            cout<<"�ثe�ҥ~�����v�O�b���throwex���ĤG�htry�϶���\n";
            throw; //���s��X�@�Өҥ~
        }
        cout<<"�Ĥ@�htry�϶����槹��\n";
    }
    catch(...) //�����Ҧ����ҥ~
    {
        cout<<"�����Ҧ����ҥ~\n";
    }
}

int main()
{
    try {
        throwex();  //�I�s���throwex
        cout<<"�b���main����try�϶�\n";  
    }
    catch(exception e)  //�����ҥ~
    {
        cout<<"�ثe�ҥ~�����v�O�b�D���main��\n";
    }
    cout<<"�b�����ҥ~�óB�z����A�䱱���v�S�^��D�{����\n";
    
    return 0;
}
