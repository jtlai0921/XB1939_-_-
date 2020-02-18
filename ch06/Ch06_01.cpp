#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for (int i=0;i<10;i++)
    {
        if(i==0)
            cout<<" ";      //如果i等於0就輸出空格
        else	
            cout<<"+";     //如果i不等於0就輸出+
        cout<<i+1;
        sum = sum + arr[i];   //將陣列中的每個元素累加到sum16		 }
        cout << " = " << sum << endl;  //輸出累加後的結果 
    }    
      return 0; 
}
