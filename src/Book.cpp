#include "Book.h"
#include <iostream>

Book::Book() : id(-1), valid(false) {}

Book::Book(const std::string& title, const std::string& author, int id) : title(title), author(author), id(id), valid(true) {}

bool Book::isValid() const {
    return valid;
}

void Book::display() const {
    if(!isValid()) {
        std::cout << "Error! Book was not initialized." << std::endl;
        return;
    }
    std::cout << "Book ID: " << id << ", Title: " << title << ", Author: " << author << std::endl;
}