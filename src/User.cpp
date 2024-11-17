#include "User.h"
#include <iostream>

User::User(const std::string& name) : name(name) {}

void User::borrowBook(const Book& book) {
    borrowedBooks.push_back(book);
}

void User::displayBooks() const {
    std::cout << "User: " << name << ", Borrowed Books: ";
    for (const Book& book : borrowedBooks) {
        book.display();
    }
}