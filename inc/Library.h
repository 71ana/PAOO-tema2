#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
    private:
        std::vector<Book> books;
        Library(const Library&) = delete;
        Library& operator=(const Library&) = delete;

    public:
        Library() = default;
        void addBook(const Book& book);
        void listBooks() const;
};

#endif