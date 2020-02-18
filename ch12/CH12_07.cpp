#include <iostream>
#include <cstdlib>
using namespace std;

template <class Type> // 定義鏈結串列中的節點
struct Node
{
    Type data;	// 紀錄資料
    Node* next;// 紀錄下一筆節點的位址
};
template <class Type>
class LinkedList	// 鏈結串列類別
{
    private:
        Node<Type>* first;	    // 指到第一個節點的指標
    public:
        LinkedList()	// 建構子
        {
            first = NULL;
        }
        void addNode(Type data); // 加入節點
        void display();	// 顯示所有的節點23	
};
template<class Type>
void LinkedList<Type>::addNode(Type data)
{
    Node<Type>* newNode = new Node<Type>;	// 新增一個節點
    newNode->data = data;			// 紀錄資料
    newNode->next = first;		// 指到前一個節點
    first = newNode;			// 指到新的節點
}
template<class Type>
void LinkedList<Type>::display()
{
    Node<Type>* currentNode = first;    // 由第一個節點開始顯示
    while( currentNode != NULL )
    {
        cout << currentNode->data << " -> ";
	    currentNode = currentNode->next;
    }
}

class person	// 定義person類別
{
    protected:
        char name[10];			// 紀錄姓名
        int height;				// 紀錄身高
        int weight;				// 紀錄體重
    public:	// 多載擷取運算子 >>,並宣告為朋友函數
        friend istream& operator >> (istream& is, person& p);
        // 多載插入運算子 <<,並宣告為朋友函數
        friend ostream & operator << (ostream& os, const person& p);
};
istream& operator >> (istream& is, person& p) // 定義多載擷取運算子
{	// 將資料輸入至person物件中
    cout << "請輸入姓名 : ";
    cin >> p.name;
    cout << "請輸入身高 : ";
    cin >> p.height;
    cout << "請輸入體重 : ";
    cin >> p.weight;
    return is;
}
ostream & operator << (ostream& os, const person& p) // 定義多載插入運算子 <<
{	// 輸出person物件中的資料
    cout << endl << "姓名 : " << p.name;
    cout << endl << "身高 : " << p.height;
    cout << endl << "體重 : " << p.weight;
    cout << endl; 
    return os;
}

int main()
{
    LinkedList<person> psnList;	// 建立一個儲存person類別型態資料的鏈結串列
    person psn;	// 宣告person物件
    char ch;	// 紀錄使用者的選擇
    do{
        cin >> psn;	// 使用多載運算子>>輸入person類別資料
        psnList.addNode( psn );	// 將person物件加入鏈結串列中
        cout << "繼續輸入(y / n)?";
        cin >> ch;
        cout << endl;
    }while( ch != 'n' );
    cout << endl;
    psnList.display();	// 顯示串列中所有的資料
    cout << endl << endl;
      
    return 0;
}
