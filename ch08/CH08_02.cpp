#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    struct
    {
        char name[10];
        int score;
        int ID;
    } s1={ "Justin",90,10001};//���w�q���c���A,�o�ŧi���c�ܼ� 
    // �]�w���c�ܼƦ�����,�����H�j�A���A�� 
    cout<<"s1.name = "<<s1.name<<endl;
    cout<<"s1.score = "<<s1.score<<endl;
    cout<<"s1.ID = "<<s1.ID<<endl;
     
    return 0;
}
