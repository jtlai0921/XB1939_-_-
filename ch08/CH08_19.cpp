#include <iostream>
#include <cstdlib>
using namespace std;

struct student
{
    char name[10];
    int score;
};
typedef struct student snd;    //定義資料型態名稱為sdn 
 
void sort(snd*);    //依成績進行排序 
 
int main()
{
    snd s[5] = {{"Justin", 90},
                 {"momor",  53},
                 {"Becky",  84},
                 {"bush",   75},
                 {"Snoopy", 93}};
    int i;
 
    cout<<"排序前："<<endl;
    for(i = 0; i < 5; i++)
        cout<<"姓名："<<s[i].name<<"\t成績："<<s[i].score<<endl;
 
    sort(s);
 
    cout<<"排序後："<<endl;
    for(i = 0; i < 5; i++)
        cout<<"姓名："<<s[i].name<<"\t成績："<<s[i].score<<endl;
 
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
                temp = fs[i+1];   //複製結構物件 
                fs[i+1] = fs[i];
                fs[i] = temp;
            }
}
