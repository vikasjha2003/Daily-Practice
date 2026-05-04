#include<iostream>
#include<vector>
using namespace std;

class solution {
public: 
    int blankspace (vector<int> &arr) {
        int cnt = 0;
        int max_cnt = 0;
        for(int i : arr) {
            if(i == 0) {
                cnt++;
                max_cnt = max(max_cnt,cnt);
            } else {
                cnt = 0;
            }
        }
        return max_cnt;
    }
};

class problem {
private:
    int n;
    vector<int> input;
public: 
    problem() {
        cin>>n;
        input.resize(n);
        for(int i = 0; i<n; i++) {
            cin>>input[i];
        }
    }
};

int main () {
    
}