#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    //�ŧi�ܼ�
    int x ,y , h;
    float ans;
    //��J��Ϊ��W���B�U���B��
    cout << "�п�J��Ϊ��W���B�U���B���G";
    cin >> x >> y >> h;//�B�⦡
    ans=(float)(x+y)*(float)h/2;
    cout << "��έ��n=" << ans << endl;
    
    return 0;
} 

