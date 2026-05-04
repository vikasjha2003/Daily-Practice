#include<iostream>
#include<string>
using namespace std;
class games {
    public: // games ka public part (can be accesesd from outside) (can be inherited)
        float size;
        string launch;
        int rating;
        string difficulty;
        bool online;
    private:
        int gamesprivate; // games ka private part (cannot be accessed from outside) (can't be inherited)
    protected:
        int gamesprotected;  // games ka protected part (cannot be accessed from outside) (can be inherited)
};
class BGMI : public games { // BGMI inherited games class (the public shows that a se jo bhi aya hai woh yaha aakey public ban gaya hai aur access ho sakta hai. parent class se sirf public aur protected ayega aur agar yaha public hai toh woh public ki tarah act kaarega aur agar private hai toh private ki tarah karega else protected.)
    public:
        int players;
        int squads;
};

int main () {
    BGMI errangel;
    errangel.difficulty = "Hard";
    errangel.launch = "Global";
    errangel.online = true;
    errangel.players = 100;
    errangel.squads = 25;
}