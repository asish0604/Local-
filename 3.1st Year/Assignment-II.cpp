#include <iostream>
#include <fstream>
using namespace std;

class Book {
protected:
    string title;
    string author;
    int yearOfPublication;

public:
    virtual void input() = 0;
    virtual void display() = 0;
    virtual string getDetails() = 0;
};

class Fiction : public Book {
private:
    string genre;

public:
    void input() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter year of publication: ";
        cin >> yearOfPublication;
        cin.ignore();
        cout << "Enter genre: ";
        getline(cin, genre);
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Year of Publication: " << yearOfPublication << ", Genre: " << genre << endl;
    }

    string getDetails() {
        return "Title: " + title + ", Author: " + author + ", Year of Publication: " + to_string(yearOfPublication) + ", Genre: " + genre + "\n";
    }
};

class NonFiction : public Book {
private:
    string subject;

public:
    void input() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter year of publication: ";
        cin >> yearOfPublication;
        cin.ignore();
        cout << "Enter subject: ";
        getline(cin, subject);
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Year of Publication: " << yearOfPublication << ", Subject: " << subject << endl;
    }

    string getDetails() {
        return "Title: " + title + ", Author: " + author + ", Year of Publication: " + to_string(yearOfPublication) + ", Subject: " + subject + "\n";
    }
};


int main() {
    string filename = "library.txt";
    int noOfBooks = 10;
    Book *books[noOfBooks];

    ofstream file(filename, ios::out);

    for (int i = 0; i < noOfBooks; i++) {
        char bookType;
        cout << "Add a NonFiction/Fiction (N/F) : ";
        cin >> bookType;
        cin.ignore();
        if (bookType == 'F') {
            books[i] = new Fiction;
        } else if (bookType == 'N') {
            books[i] = new NonFiction;
        } else {
            cout << "Please enter correct format either N or F" << endl;
            i--; // decrement i to repeat the current iteration
            continue;
        }
        books[i]->input();
        books[i]->display();
        file << books[i]->getDetails();
    }

    file.close();

    ifstream inFile(filename, ios::in);
    string line;
    cout << "\nReading from file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    return 0;
}