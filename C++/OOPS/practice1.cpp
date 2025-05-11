#include<iostream>
#include<string>
using namespace std;

class book {
    public:
        string name;
        float price;
        int page;
        int countbooks(int a) {
            if(a<price) {
                return 1;
            } else {
                return 0;
            }
        }
        bool isbbokpresent(string book) {
            if(book==name) {
                return true;
            } else {
                return false;
            }
        }
};

int main () {
    book one_piece;
    one_piece.price = 99.99;
    one_piece.name = "One Piece";
    one_piece.page = 500;    
}