#include <iostream>
#include <cstdlib>
using namespace std;

class Cubic   //�w�qSquare���O
{
    int a;
    public:
        Cubic(int n)
        {
            a=n*n*n;
        }//�غc�l���w�q 
        Cubic cub_sum(Cubic b)
        {
            this->a=this->a+b.a;
            return  *this;//�z�Lthis���жǦ^Cubic���O���� 
        }  
        int show_data()
        {
            cout<<(*this).a<<endl;//�C�L�p����Ʀ���a���� 
            return 0;
       }
};

int main()
{
    int n1,n2;
      
    cout<<"��J�Ĥ@�Ӽ�:";
    cin>>n1;
    cout<<"��J�ĤG�Ӽ�:";
    cin>>n2;
    Cubic first(n1),second(n2),third(0);//����ŧi�P��l�� 
    third=first.cub_sum(second);//�I�sfirst���������,�öǦ^Cubic���� 
    third.show_data();//�����H������ƦC�L���G 
      
    return 0;
}
