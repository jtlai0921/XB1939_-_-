#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num1 = 100;
    int *address1;

    address1 = &num1;
    cout<<"num1���x�s��      �G"<<num1<<endl;
    cout<<"num1���O�����}  �G"<<&num1<<endl;//�Q��&�B��l���X��}
    cout<<"address���x�s��   �G"<<address1<<endl;
    cout<<"address�O�����} �G"<<&address1<<endl;//��X�����ܼƪ���}  
    
    return 0;
}
