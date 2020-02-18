#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

  //��H��¦���Omainclass
class mainclass
{
    public:
        //�µ������getweight()�G�Hfloat���A�^��
        virtual float getweight() = 0;
        //���change()�G���J�ഫ�s�q
        float change()
        {
            return float(getweight()/28);
        }
};

//�l�����Og_to_oz�]���J����s�q�^�Hpublic���A�~��
class g_to_oz: public mainclass
{
    protected:
        float g;                                         //���J
    public:
        //���g_to_oz()�G�]�w���J��
        g_to_oz(float a)
        {
            g = a;
        }
        //�������getweight()�G�Ǧ^���J��
        float getweight()
        {
            return g;
        }
};

//�l�����OKg_to_pd�]���紫��S�^�Hpublic���A�~��
class Kg_to_pd: public mainclass
{
    protected:
        float Kg;                                       //����
    public:
        //���Kg_to_pd()�G�]�w�����
        Kg_to_pd (float b)
        {
            Kg = b;
        } 
        //�������getweight()�G�Ǧ^����Ȩð������B��
        float getweight() 
        {
            return float(Kg*1000/16);
        } 
};
int main()
{
    cout <<"�׶q�Ŵ����" <<"    " <<"1�s�q����28�J" <<endl;
    cout<<"-------------------------------------------"<<endl;
    g_to_oz object1(4321);
    cout <<"4321�J����" <<object1.change() <<"�s�q" <<endl;
    cout <<"�׶q�Ŵ����" <<"    " <<"1�S����16�s�q" <<endl;
    cout<<"-------------------------------------------"<<endl;
    Kg_to_pd object2(43);
    cout <<"43���絥��" <<object2.change() <<"�S" <<endl;
      
    return 0;
}
