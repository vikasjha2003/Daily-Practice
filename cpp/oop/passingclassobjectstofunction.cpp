#include<iostream>
#include<string>
using namespace std; 
class player {
    private:
        // this class requires combined total of 25 byte space, 8*3 for int and 1 for bool
        int health;
        int kills;
        int assist;
        bool alive;
        string name;
    public:
        player () {
            alive = true;
        }
        int gethealth() {
            return health;
        }
        int getkills() {
            return kills;
        }
        int getassist() {
            return assist;
        }
        bool getalive() {
            return alive;
        }
        string getname() {
            return name;
        }
        void sethealth(int health) {
            this->health = health;  // "this" operator tells us that the health belongs to class and not just function.
            // player::health = health; // :: scope resolution operator(defines scope of the variable)
        }
        void setkills(int kills) {
            this->kills = kills;
        }
        void setassist(int assist) {
            this->kills = assist;
        }
        void setalive(bool alive) {
            this->alive = alive;
        }
        void setname(string name) {
            this->name = name;
        }
};

void giveresult(player a, player b) {
    if(b.gethealth()<a.gethealth()) {
        cout<<a.getname()<<" wins "<<b.getname()<<" is noob."<<endl; 
    }
    
}

int main () {
    player kaalchoddu;
    kaalchoddu.setname("Kaalchoddu");
    kaalchoddu.setassist(5);
    kaalchoddu.sethealth(100);
    kaalchoddu.setkills(22);
    player beastboy;
    beastboy.setname("BeastBoy");
    beastboy.setassist(0);
    beastboy.sethealth(0);
    beastboy.setkills(2);
    player *Aditya = new player;  // method to create real time allocated object
    player aditya = *Aditya;  // Object creation required to access like this method.
    cout<<(*Aditya).getalive();  // Can be used to directly use pointer without creating an object.
    Aditya->getalive();  // the best method to create dynamic memory allocated object without using * or bracket, just use "->" operator.
    giveresult(kaalchoddu,beastboy);
}