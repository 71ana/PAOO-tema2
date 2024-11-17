#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
    private:
        std::string title;
        std::string author;
        int id;
        bool valid;

    public:
        Book();
        Book(const std::string& title, const std::string& author, int id);
        void display() const;
        bool isValid() const;
};

#endif