#include <iostream>
#include <cstdlib>
using namespace std;

struct student
{
    char name[10];
    int score;
};
typedef struct student snd;    //�w�q��ƫ��A�W�٬�sdn 
 
void sort(snd*);    //�̦��Z�i��Ƨ� 
 
int main()
{
    snd s[5] = {{"Justin", 90},
                 {"momor",  53},
                 {"Becky",  84},
                 {"bush",   75},
                 {"Snoopy", 93}};
    int i;
 
    cout<<"�Ƨǫe�G"<<endl;
    for(i = 0; i < 5; i++)
        cout<<"�m�W�G"<<s[i].name<<"\t���Z�G"<<s[i].score<<endl;
 
    sort(s);
 
    cout<<"�Ƨǫ�G"<<endl;
    for(i = 0; i < 5; i++)
        cout<<"�m�W�G"<<s[i].name<<"\t���Z�G"<<s[i].score<<endl;
 
    return 0;
}

void sort(snd* fs)
{
    int i, j;
    snd temp;
 
    for(j = 5; j > 0; j--)
        for(i = 0; i < j - 1; i++)
            if( fs[i].score < fs[i+1].score)
            {
                temp = fs[i+1];   //�ƻs���c���� 
                fs[i+1] = fs[i];
                fs[i] = temp;
            }
}
