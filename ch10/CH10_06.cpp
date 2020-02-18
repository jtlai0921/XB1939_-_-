#include <iostream>  
#include <cstdlib> 
using namespace std;
 
class Matrix     // 計算矩陣相加的自訂類別  
{  
    int Matrix_Num[2][2];  // 設定2x2的矩陣  
    public:  
        Matrix() 
        {  
            int i,j;  
            for (i=0; i<2; i++)  
                for(j=0; j<2; j++)  
                    Matrix_Num[i][j]=0; // Matrix矩陣的建構子  
                // 全部初始化為0  
        }  
        Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)  
        {  
            Matrix_Num[0][0]=Tmp_a1;         // Matrix矩陣的建構子  
            Matrix_Num[0][1]=Tmp_a2;         // 初始化格式為  
            Matrix_Num[1][0]=Tmp_b1;         // |a1  a2|  
            Matrix_Num[1][1]=Tmp_b2;         // |b1  b2|  
        }  
        Matrix operator +=(Matrix t2);       // 多載指定運算子+=的函數原型宣告  
        // 並設定傳回型態為Matrix類別型態  
        friend istream& operator >> (istream& in, Matrix& Tmp_Mat);  
        // >>運算子的多載函數原型宣告，in是由istram類別生成的輸入物件  
        friend ostream& operator << (ostream& out, Matrix& Tmp_Mat);  
        // <<運算子的多載函數原型宣告，out是由ostream類別生成的輸出物件  
};  
Matrix Matrix::operator +=(Matrix t2)  
{  
    int i,j;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            Matrix_Num[i][j] += t2.Matrix_Num[i][j];  // 透過迴圈計算矩陣相加的結果  
            // |a1 a2| |a3 a4| |a1+a3  a2+a4|  
            // |b1 b2|+|b3 b4|=|b1+b3  b2+b4|  
    return (*this);  
}  
istream& operator >> (istream& in, Matrix& Tmp_Mat)  
{  
    int i,j;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            in >> Tmp_Mat.Matrix_Num[i][j];   // 透過迴圈設定類別的成員資料  
    return (in);                               // 傳回輸入物件  
}  
ostream& operator << (ostream& out, Matrix& Tmp_Mat) 
{  
    int i,j; 
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            out << Tmp_Mat.Matrix_Num[i][j] << " ";  // 透過迴圈設定類別的成員資料  
        cout << endl;  
    return (out);   // 傳回輸出物件  
}  
int main()  
{  
    Matrix M1,M2;  
    cout << "請輸入M1矩陣的值：";  
    cin >> M1;  // 呼叫多載運算子>>設定物件內容  
    cout << "請輸入M2矩陣的值：";  
    cin >> M2;  // 呼叫多載運算子>>設定物件內容  
    M1 += M2;   // 呼叫多載運算子+=  
    cout << endl;  
    cout << "M1+=M2 矩陣後的M1矩陣結果為：" <<M1<< endl;   // 呼叫多載運算子<<輸出物件內容  
 
    return 0;
}
