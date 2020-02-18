#include <iostream> 
#include <cstdlib>  
#include <cstring>  
using namespace std;  
 
class BookShelf  //�w�q�~�����OBookShelf
{  
    private:  
       
        static int MAX_BOOKS;  
        int count;  
        char* name;  
        class Book  	//�w�q�_�����OBook
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
				    cout<<"A0001���Ѭ[�w�g���F\n"<<endl;  
                }  
                book[count++] = new Book(t,p);  
             }  
            void ListAllBooks() 
            {  
               cout<<"["<<name<<"]"<<endl;  
               cout<<"======================================"<<endl;  
               for(int i=0;i<count;i++)  
               {
                   cout<<book[i]->getTitle()<<"  "<<"�w��:"<<book[i]->getPrice()<<"��"<<endl;  
                   cout<<"---------------------------------------"<<endl;
               }
            }  
};  
int BookShelf::MAX_BOOKS = 8;  
int main() 
{  
    BookShelf bks("�Ϯ��]A0001���Ѭ[");  
    bks.InsertBook("�̷s�p�������",550);//���J���y1 
    bks.InsertBook("�ӻ���������",490);//���J���y2  
    bks.InsertBook("��qJava�y��",560); //���J���y3 
    bks.InsertBook("��qC++�y�����",520); //���J���y4 
    bks.InsertBook("Flash�J���P���ι��",480); //���J���y5
    bks.InsertBook("��qC�y��",530); //���J���y6 
    bks.InsertBook("��qVisual Basic 2008 ���",540); //���J���y7 
    bks.InsertBook("Dreamweaver Cs3���P���ι��",510); //���J���y8
                
    bks.ListAllBooks(); //�C�X�Ѭ[�W���Ҧ����y 
                
    return 0;
}
