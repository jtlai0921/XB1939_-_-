#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Select, Result=77;  // �w�q����ܼ� Select, Result
    // Result �x�s���� 
    cout << "�q�q���߼ֳz���X(2���):";
    cin >> Select;
    cout << "�����z�q���F�S!!";
    cout << endl << endl;
    if (Select-Result)  // if�h�����ԭz
    {
        cout << "�q���F....";
        cout << endl;    // ����
    }
     
    return 0;
}

