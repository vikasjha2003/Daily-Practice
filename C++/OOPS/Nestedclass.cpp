#include<iostream>
#include<vector>
#include<string>
using namespace std;

class type {
    public:
        string form;
        string genre;
};

class library {
    private:
        string name;
        int price;
        string author;
        type typ;
    public:
        int getprice() {
            return price;
        }
        string getname() {
            return name;
        }
        string getauthor() {
            return author;
        }
        type gettyp() {
            return typ;
        }
        void setprice (int price) {
            this->price = price;
        }
        void setname (string name) {
            this->name = name;
        }
        void setauthor (string author) {
            this->author = author;
        }
        void settyp(type typ) {
            this->typ = typ;
        }  
};
int main () {
    library book1;
    book1.setname("One Piece");
    type first;
    first.form = "Manga";
    first.genre = "Adventure";
    book1.settyp(first);
    type manga = book1.gettyp();
    cout<<manga.form;
    cout<<endl;
    cout<<manga.genre;
}