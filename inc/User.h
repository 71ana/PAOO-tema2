#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Book.h"

class User {
    private:
        std::string name;
        std::vector<Book> borrowedBooks;

    public:
        User(const std::string& name);
        void borrowBook(const Book& book);
        void displayBooks() const;
};

#endif