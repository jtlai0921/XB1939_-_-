#include<iostream>
#include<cstdlib>
using namespace std;
	
int main()
{
    int num;  // �ŧi����ܼ�num
    cout<<"��Jnum���ȡG";
    cin>>num; // ��J�ܼ�num����
    try
    {
        // ���p�ܼ�num�Ȥj��10�Ӥp��20�ɡA�N��X�@�Ӿ�ƫ��O���ҥ~
        if ((num > 10) && (num < 20))  
        {
	        throw 1;
        }
        // ���p�ܼ�num�Ȥp��10�ɡA�N��X�@�Ӧr�����O���ҥ~
        if (num < 10)
        {
            throw '*';
        }
        if (num > 20)
        {
            throw 3.5;
        }
    }
    catch(int) // ������ƫ��O���ҥ~
    {
        cout<<"�ثe�O��catch(int)������ҥ~"<<endl;
    }
    catch(char) // �����r�����O���ҥ~
    {
	    cout<<"�ثe�O��catch(char)������ҥ~"<<endl;
    }
    catch(...) // �����Ҧ����ҥ~
    {
        cout<<"�ثe�O��catch(...)������ҥ~"<<endl;
    }
		
    return 0;
}
