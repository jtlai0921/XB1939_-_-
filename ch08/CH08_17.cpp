#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{ 
    enum animal{
        tiger=5,
        monkey,
        dog=9,
        cat};//�w�q�C�|���A animal 
       
    enum animal zoo1,zoo2; //�ŧi�C�|���Aanimal���ܼ� zoo1�Pzoo2 
    zoo1=tiger;// �Nzoo1���ȳ]�w��tiger 
    zoo2=dog;// �Nzoo2���ȳ]�w��dog 
     
    cout<<"tiger="<<tiger<<" monkey="<<monkey<<" dog="<<dog<<" cat="<<cat<<endl;
    cout<<"zoo1="<<zoo1<<" zoo2="<<zoo2<<endl;
     
    return 0;
}
