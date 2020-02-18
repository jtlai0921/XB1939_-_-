#include <fstream>	// 處理檔案輸出入的標頭檔
#include <iostream>	
#include <cstdlib>	
using namespace std;

struct person
{
 char name[10];
 int	height;
 int weight;
};

int main()
{
    person psn;	// 宣告person類別
    const int objSize = sizeof(psn);// 紀錄物件的大小
    int i=0;
    fstream file;	// 宣告檔案輸出物件
    char ch = ' ';
    int pos = 0;
    file.open("out8.dat", ios::out | ios::in | ios::binary);
    do
    {
        cout << "您要從第幾筆資料寫入?";
        cin >> pos;
        pos--;
        file.seekp( pos * objSize );	// 設定寫入位置
        cout << "請輸入姓名 : ";
        cin >> psn.name;
        cout << "請輸入身高 : ";
        cin >> psn.height;
        cout << "請輸入體重 : ";
        cin >> psn.weight;
        file.write( (char*) &psn, objSize );	
        // 使用write()函數寫入資料到檔案中
        cout << "是否要繼續輸入資料( y / n )?";
        cin >> ch;
    } while ( ch == 'y' );
      
        cout << endl;
      
        // 將讀取資料的位置設為檔案起始處
        file.seekg( 0 );
        while ( 1 )
        {
            file.read( (char*) &psn, objSize ); 
            // 使用read()函數將檔案中的資料存到物件中
            if( !file )	// 檢查檔案是否正確讀取
            {
                break;
            }
            cout << "姓名 : " << psn.name << endl;
       	    cout << "身高 : " << psn.height << endl;
            cout << "體重 : " << psn.weight << endl;
            cout << endl;
        }
      
    file.close();
    cout << endl;
      
    return 0;
}
