#include <iostream>
#include <cstdlib>
using namespace std;

class Cube    //�w�qCube���O
{
    int a;
public:
    Cube(int n)
    {
      a=n*n*n;
    }
    void cub_sum(Cube,Cube);       //��ƭ쫬�ŧi
};

void Cube::cub_sum(Cube b,Cube c)   //���cub_sum�{���X��@
{
     a=a+b.a+c.a;
     cout<<"�T�ƪ��ߤ�M: "<<a;
}
int main()
{
      Cube first(2),second(3),third(4);
      first.cub_sum(second,third);
      
      
      return 0;
}
