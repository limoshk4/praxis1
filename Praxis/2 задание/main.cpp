#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;

public:

    Book() : title(""), author(""), year(0) {}

    void setTitle(const string& newTitle) {
        title = newTitle;
    }

    void setAuthor(const string& newAuthor) {
        author = newAuthor;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    void getInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {

    Book book;

    book.setTitle("Hatters Castle");
    book.setAuthor(" Archibald Cronin");
    book.setYear(1931);

    book.getInfo();

    return 0;
}
