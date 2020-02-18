template<typename T >
class Stack 
{  // 定義一個名為Stack的類別
	public:
	   Stack( int = 5 );    // 定義建構子，並指定大小為5
	   ~Stack() { delete [] stackPtr; } // 定義解構子
	   bool push( const T& ); // 用來將一個元素放在堆中
	   bool pop( T& );        // 用來自堆疊中取出一個元素
	private:
	   int size;             // 定義堆疊內的元素個數
	   int top;              // 用來代表頂端元素的位置
	   T *stackPtr;          // 用來代表堆疊的指標
	
	   bool isEmpty() const; // 用來判斷是堆疊是否空的
	   bool isFull() const;  // 用來判斷堆疊是否滿的
};
	
	// 預設堆疊的大小為5
template< typename T >
Stack< T >::Stack( int s ) // 將成員函數的定義與類別樣版的範圍結合起來
{
    size = s > 0 ? s : 5;  
    top = -1;               // 預設堆疊是空的
    stackPtr = new T[ size ]; // 針對元素個數來配置空間
}
	
	// 定義成員函數push
	// 功能：將元素放在堆疊中
	// 假如可以成功地將元素放置在堆疊中，則傳回true
	// 假如無法成功地將元素放置在堆疊中，則傳回flase
template< typename T >
bool Stack< T >::push( const T &pushValue )
{
	    if ( !isFull() )  // 判斷堆疊內的空間是否已滿
	    {
	       stackPtr[ ++top ] = pushValue; // 將元素放置在堆疊中
	       return true;  // 成功放置在堆疊中，傳回true
        }
	return false;     // 無法成功放置在堆疊中，傳回flase
}
	
	// 定義成員函數pop
	// 功能：自堆疊中取出元素
	// 假如可以成功地自堆疊中取出，則傳回true
	// 假如無法成功地自堆疊中取出元素，則傳回flase
template< typename T > 
bool Stack< T >::pop( T &popValue )
{
	if ( !isEmpty() ) {
        popValue = stackPtr[ top-- ];  // 自堆疊中取出元素
	    return true;  // 成功自堆疊中取出元素，傳回true
    }
	return false;     // 無法自堆疊中取出元素，傳回false
}
	
	// 定義成員函數isEmpty
	// 功能：用來判斷堆疊是否為空
template< typename T > 
bool Stack< T >::isEmpty() const
{
	return top == -1;	// 若為空，傳回值-1
}
	
	
	// 定義成員函數isFull
	// 功能：用來判斷堆疊是否滿的
template< typename T > 
bool Stack< T >::isFull() const
{
	return top == size - 1;	
}
