#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<array>
#include<string>
using namespace std;

class book_detail//Class
{
   
     char book_name[30];
     int book_id;
     
    public:
    void get_book();
    void print_book();
    int get_book_by_id(int bid) {
        

    };

    
};
//Declaring


void book_detail::get_book() {
    cout<<"Enter the name of the book"<<endl;
             cin>>book_name;
             cout<<"Enter the id of the book"<<endl;
             cin>>book_id;
}


void book_detail::print_book() {
    cout<<"The name of the book is -"<<book_name<<endl;
            
     cout<<"The id of the book is -"<<book_id<<endl;
    
}





int main() 
{

    string operation;
    
    cout<<"Book Managment System"<<endl;
    cout<<"Please Choose which operation you want to perform - : Add, Delete,"<<endl;
    cin>>operation;

    if (operation == "Add")
    {
        int number_of_books;
        cout<<"Enter the number of books you want to add"<<endl;
        cin>>number_of_books;
       
         book_detail bd[number_of_books];
         int i=0;
        do
        {
          bd[i].get_book();
             i++;   
        } while (i < number_of_books);
        
        for (int i = 0; i < number_of_books; i++)
        {
            bd[i].print_book();
        }
        
        
        

    }
    else if (operation == "Delete")
    {
       cout<<"Enter the id of the book"<<endl;
    }
    else{
        exit(0);
    }
    
    return 0;
}

