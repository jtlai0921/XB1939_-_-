#include <iostream> 
#include <cstdlib>  
#include <cstring>  
using namespace std;  
 
class BookShelf  //定義外圍類別BookShelf
{  
    private:  
       
        static int MAX_BOOKS;  
        int count;  
        char* name;  
        class Book  	//定義巢狀類別Book
        {  
            private:  
                char* title;  
                int price;  
            public:  
            Book(char* t,int p)  
            { 
                title = new char[strlen(t) + 1]; 
                strcpy(title,t);  
                price = p; 
            }  
            char* getTitle() { return title; }  
            int getPrice() { return price; } };  
        Book* book[8];  
        public:  
            BookShelf(char* n) 
            {  
                name = new char[strlen(n) + 1];  
                strcpy(name,n);  
                count = 0;  
           	}  
      	    void InsertBook(char* t,int p)  
            {  
			    if(count == MAX_BOOKS)  
            	{  
				    cout<<"A0001號書架已經滿了\n"<<endl;  
                }  
                book[count++] = new Book(t,p);  
             }  
            void ListAllBooks() 
            {  
               cout<<"["<<name<<"]"<<endl;  
               cout<<"======================================"<<endl;  
               for(int i=0;i<count;i++)  
               {
                   cout<<book[i]->getTitle()<<"  "<<"定價:"<<book[i]->getPrice()<<"元"<<endl;  
                   cout<<"---------------------------------------"<<endl;
               }
            }  
};  
int BookShelf::MAX_BOOKS = 8;  
int main() 
{  
    BookShelf bks("圖書館A0001號書架");  
    bks.InsertBook("最新計算機概論",550);//插入書籍1 
    bks.InsertBook("細說網路概論",490);//插入書籍2  
    bks.InsertBook("精通Java語言",560); //插入書籍3 
    bks.InsertBook("精通C++語言實務",520); //插入書籍4 
    bks.InsertBook("Flash入門與應用實務",480); //插入書籍5
    bks.InsertBook("精通C語言",530); //插入書籍6 
    bks.InsertBook("精通Visual Basic 2008 實務",540); //插入書籍7 
    bks.InsertBook("Dreamweaver Cs3門與應用實務",510); //插入書籍8
                
    bks.ListAllBooks(); //列出書架上的所有書籍 
                
    return 0;
}
