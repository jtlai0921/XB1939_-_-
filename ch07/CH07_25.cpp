#include <iostream> 
#include <cstdlib>  
using namespace std;
                                        
int main()
{
    int *intptr = new int(50);
    //�ŧi�@���V��ƪ�����,�b�ӰO���餤�s�J��ƭ�50
    float *floatptr = new float;
    //�ŧi�@���V�B�I�ƪ�����,�������w�O���餤�x�s����ƭ�
    cout << "intptr ���V����}�G"   << intptr  << "\n";
    cout << "intptr ���V��}������ơG" << *intptr << "\n\n";
    *floatptr = 0.5;
    cout << "floatptr ���V����}�G"   << floatptr  << "\n";
    cout << "floatptr ���V��}������ơG" << *floatptr << "\n\n";

	delete intptr;
	delete floatptr;

    return 0;
}
