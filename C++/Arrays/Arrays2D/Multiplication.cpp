#include <iostream>
using namespace std;

int main() {
    int n, m, o, p;
    
    cout << "Enter no. of rows in matrix 1: ";
    cin >> n;
    cout << "Enter no. of columns in matrix 1: ";
    cin >> m;
    cout << "Enter no. of rows in matrix 2: ";
    cin >> o;
    cout << "Enter no. of columns in matrix 2: ";
    cin >> p;
    
    // Check if multiplication is possible
    if (m != o) {
        cout << "Multiplication is not possible!" << endl;
        return 0;
    }
    
    // Declare matrices dynamically
    int a[n][m], b[o][p], ab[n][p] = {0};
    
    cout << "Enter the elements of first matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << "Enter the elements of second matrix: ";
    for (int i = 0; i < o; i++) {
        for (int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }
    
    // Perform multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                ab[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Output result
    cout << "Resultant matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << ab[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
