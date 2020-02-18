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
    ofstream ofile;// 宣告檔案讀取(輸出)物件
  
    char ch = ' ';
    ofile.open("out8.dat", ios::binary);		
    // 使用二進位模式開啟檔案
    if( !ofile )	// 檢查檔案是否正確開啟
    {
        cerr << "檔案無法開啟" << endl;
        ofile.close();
         return 0;
    }
   
    do {
        psn.setData();
        ofile.write( (char*) &psn, sizeof( psn ) );	
        // 使用write()函數寫入資料到檔案中
        if( !ofile )// 檢查檔案是否正確寫入
        {
            cerr << "檔案無法寫入" << endl;
            break;
        }
        cout << "是否要繼續輸入資料( y / n )?";
        cin >> ch;
    } while ( ch == 'y' ); 
    ofile.close();
    cout << endl;
  
    return 0;
}
