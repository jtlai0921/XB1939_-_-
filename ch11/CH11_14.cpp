#include <iostream>
#include <cstdlib>
using namespace std;

//�ŧi��¦���Obaseclass
class baseclass 
{  
    public:
    //�ŧipublic�϶��ܼ�a
        int a;
    //�ŧimain_get()��Ʀs��a��
        void main_get(int w) 
        {
            a = w;
        }
};

//�ŧi�Ĥ@�h�l�����Osub1�åH����public���A�~��baseclass
class sub1: virtual public baseclass
{
    public:
    //�ŧipublic�϶��ܼ�b
        int b;
    //�ŧisub1_get()��Ʀs��b��
        void sub1_get(int x)
        {
            b = x;
        }
};

//�ŧi�Ĥ@�h�l�����Osub2�åH����public���A�~��baseclass
class sub2: virtual public baseclass
{
    public:
    //�ŧipublic�϶��ܼ�c
        int c;
    //�ŧisub2_get()��Ʀs��c��
        void sub2_get(int y)
        {
            c = y;
        }
};

//�ŧi�ĤG�h�l�����Osub3�åHpublic���A���O�~��sub1��sub2
class sub3: public sub1, public sub2
{
    public:
    //�ŧipublic�϶��ܼ�d
        int d;
    //�ŧisub3()��Ʀs��d��
        sub3(int z)
        {
            d = z;
        }
    //�ŧishow()��ƱN��ƿ�X�ܿù�
        void show()
        {
           cout <<"��¦���Obaseclass���ܼ�a���Ȭ�  " <<a <<endl;
           cout <<"�Ĥ@�h�l�����Osub1�ܼ�b���Ȭ�   " <<b <<endl;
           cout <<"�Ĥ@�h�l�����Osub2�ܼ�c���Ȭ�   " <<c <<endl;
           cout <<"�ĤG�h�l�����Osub3�ܼ�d���Ȭ�   " <<d <<endl;
           cout <<"�Ҧ��ܼƬۥ[" <<a <<"+" <<b <<"+" <<c <<"+" <<d;
           cout <<"=" <<a+b+c+d <<endl;
        }
};

int main()
{
//�ŧi�l�����Osub3������object3�A�çQ��object3������L���@�s���ʧ@
    sub3 object3(4);
    object3.main_get(1);
    object3.sub1_get(2);
    object3.sub2_get(3);
    object3.show();
     
    return 0;
}
