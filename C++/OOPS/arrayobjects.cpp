#include<iostream>
#include<vector>
#include<string>
using namespace std;
class cricketer {
    public:
        string Name;
        int Age;
        int Runs;
};
int main () {
    cricketer *virat = new cricketer;
    virat->Age = 45;
    virat->Name = "Virat Kohli";
    virat->Runs = 0;
    cricketer A[1] = {*virat};
    for(int i = 0; i<1; i++) {
        cout<<A[0].Name<<endl;
        cout<<A[0].Runs<<" runs"<<endl;
        cout<<A[0].Age<<endl;
    }
}