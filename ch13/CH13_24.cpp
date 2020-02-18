#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;

class person
{
    protected:
        char name[10];
        int	height;
        int  weight;
    public:
    void setData(void) // 輸入個人資料
    {
        cout << "請輸入姓名 : ";
        cin >> name;
        cout << "請輸入身高 : ";
        cin >> height;
        cout << "請輸入體重 : ";
        cin >> weight;
    }
    void getData(void) // 輸出個人資料
    {
        cout << "姓名 : " << name << endl;
        cout << "身高 : " << height << endl;
        cout << "體重 : " << weight << endl;
    }
};

int main()
{
    person psn;// 宣告person物件
    ifstream ifile;// 宣告檔案讀取(輸入)物件
    ifile.open("out8.dat", ios::binary);	// 使用二進位模式開啟檔案
    if( !ifile )// 檢查檔案是否正確開啟
    {
        cerr << "檔案無法開啟" << endl;
        return 0;
    }
    while ( 1 ) {
        ifile.read( (char*) &psn, sizeof( psn ) ); 
        // 使用read()函數將檔案中的資料存到物件中
        if( !ifile )// 檢查檔案是否正確讀取
        {
            break;
        }
        psn.getData(); // 將讀取的資料顯示於螢幕上
        cout << endl;
   }
   ifile.close();
   cout << endl;
  
   return 0;
}
