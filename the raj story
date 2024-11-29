#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
    char genre[50];
    char isbn[20];
};

void displayDetails(struct Book b) {
    printf("Book Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Publication Year: %d\n", b.year);
    printf("Genre: %s\n", b.genre);
    printf("ISBN: %s\n", b.isbn);
}

int main() {
    struct Book book1 = {"The durga story", "Guru", 2022, "Fiction",};
    struct Book book2 = {"To raj story", "pavan", 2020, "Fiction", };
    
    displayDetails(book1);
    displayDetails(book2);
    
    return 0;
}
