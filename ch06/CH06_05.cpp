#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int arr[2][2];
    int sum;
    cout << "|a1 b1|\n";
    cout << "|a2 b2|\n";
    cout << "�п�Ja1:";
    cin >> arr[0][0];
    cout << "�п�Jb1:";
    cin >> arr[0][1];
    cout << "�п�Ja2:";
    cin >> arr[1][0];
    cout << "�п�Jb2:";
    cin >> arr[1][1];
    sum = arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];//�D�G����C������ 
    cout << "|" << arr[0][0] << " " << arr[0][1] << "|\n";
    cout << "|" << arr[1][0] << " " << arr[1][1] << "| = ";
    cout << sum <<endl;
  
    return 0;
}
