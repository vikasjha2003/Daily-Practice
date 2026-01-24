#include<iostream>
using namespace std;
int main () {
    int m;
    cout<<"Please enter your marks : ";
    cin>>m;
    if (m>=91) {
        cout<<"Excellent";
    } else {
        if (m>=81) {
            cout<<"Very good";
        } else {
            if (m>=71) {
                cout<<"Good";
            } else {
                if (m>=61) {
                    cout<<"Can do better";
                } else {
                    if (m>=51) {
                        cout<<"Average";
                    } else {
                        if (m>=41) {
                            cout<<"Below average";
                        } else {
                            cout<<"fail";
                        }
                    }
                }
            }
        }
    }
}
