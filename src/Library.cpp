#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    if(book.isValid()){
        books.push_back(book);
    } else {
        std::cout << "This book was not initialized! You can't add it in the library. Please initialize first." <<std::endl;
    }

}

void Library::listBooks() const {
    std::cout << "Books in Library: " << std::endl;
    for(const Book& book : books)
        book.display();
}