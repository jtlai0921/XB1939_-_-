#include <iostream>
#include <cstdlib>
#define NEWLINE putchar('\n') //�w�q�������O 
using namespace std;

#define OS_ENV 95

#if OS_ENV == 95     // �Y (OS_ENV == 95)
    #define OS "Windows 95"    // �h�ϥ� #define ���O�w�q�ѧO�r OS
#elif OS_ENV == 98    // �Y (OS_ENV == 98)
    #define OS "Windows 98"    // �h�ϥ� #define ���O�w�q�ѧO�r OS
#elif OS_ENV == 2000     // �Y (OS_ENV == 2000)
    #define OS "Windows 2000"       // �h�ϥ� #define ���O�w�q�ѧO�r OS
#else	   
    #define OS "Windows XP"        // �Y�e���ҦC���س����ŦX�A�h�i�榹�϶����{���ԭz
#endif	

int main()
{
    cout << "����sĶ���@�~���x => " << OS;        // ��ܴ��ܰT���P�w�q���ѧO�r OS
    cout << endl;

    return 0;
}
