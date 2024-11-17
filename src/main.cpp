#include "Book.h"
#include "User.h"
#include "Library.h"

#include <iostream>

int main() {
    Library library;
    library.addBook(Book("1984", "George Orwell", 1));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee", 2));
    library.listBooks();

    Book book;
    library.addBook(book);
    library.listBooks();

    User user("Alice");
    user.borrowBook(Book("1984", "George Orwell", 1));
    user.displayBooks();

    User userCopy = user;
    userCopy.displayBooks();

    // Library libraryCopy = library; // This line would cause a compilation error

    return 0;
}