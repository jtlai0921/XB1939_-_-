#include <iostream>


using namespace std;
 
int main()
{
    int Select, Answer; // �w�q����ܼ� Select, Result
    Answer=77; // Result �O���w�]���Ʀr(77)
    
    cout << "�q�q�t�Ϊ����B�Ʀr(2���):";
    cin >> Select;
    Select == Answer ?  cout << "�B�𤣿���.... �q��F"// ?: ����B��l
    :  cout << "��p.... �S���q��....";
    cout << endl;  // ����
    
    return 0;
}

