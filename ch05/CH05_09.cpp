#include <iostream>
#include <cstdlib>

using namespace std;


int x=10;// x 办跑计 

int main()
{
    void setX1();  //砞﹚办跑计 20 
    void setX2();  //砞﹚办跑计 30 
    cout<<"main()ㄧ计いx = "<<x<<endl;
    setX1();
    cout<<"main()ㄧ计いx = "<<x<<endl;
    setX2();
    cout<<"main()ㄧ计いx = "<<x<<endl;
    
    return 0;
}
void setX1()
{
    x = 20;
    cout<<"setX1()ㄧ计いx = "<<x<<endl;
}

void setX2()
{
    int x = 30;//ㄧ计いΤ籔办跑计x 
    cout<<"setX2()ㄧ计い跋办跑计x = "<<x<<endl;
    cout<<"setX2()ㄧ计い办跑计x = "<<::x<<endl;//ㄧ计い籔跋办跑计x 
}
