#include<bits/stdc++.h>
using namespace std;

// THIS IS WRONG APPROACH AND WON"T WORK FOR ALL TEST CASES
// int main () { 
//     int n; // number of invaders
//     cin>>n;
//     vector<int> a(n); // arrival time
//     vector<int> b(n); // wait time
//     vector<int> d(n); // distance
//     for(int i = 0; i<n; i++) {
//         cin>>a[i];
//         cin>>b[i];
//         cin>>d[i];
//     }
//     sort(b.begin(), b.end());
//     int fuel = 0; // to keep track of fuel cost
//     int mina = 0; // to keep track of lower limit of the range
//     int count = 0; // to keep track of the count
//     for(int i = 0; i<b.size(); i++) {
//         if(count == b.size()) break; // all arrival time checked
//         if(i>0 && b[i-1] == b[i]) continue; // to avoid checking for duplicate arrival time
//         int maxa = b[i]; // to keep track of upper limit of the range
//         int maxi = 0; // to calculate the maximum distance
//         for(int j = 0; j<a.size(); j++) {
//             if(a[j] > mina && a[j] <= maxa) {
//                 count++;
//                 maxi = max(maxi,d[j]);
//             }
//         }
//         mina = maxa; // updating the lower limit
//         fuel += maxi; // adding the fuel cost which should be equal to the maximum value
//     }
//     cout<<fuel<<endl;
// }

// CORRECT APPROACH FOR THIS PROBLEM USING GREEDY