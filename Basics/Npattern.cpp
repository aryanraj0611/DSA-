#include<iostream>
using namespace std;

int main() {

    //take 5 as input

    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << "   ";  

        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == (5 + 1) / 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << "   ";  

        for (int j = 1; j <= 5; j++) {
            if (j == 1 || i == 1 || i == 5 || (i == (5 + 1) / 2 && j > 5 / 2) || (j == 5 && i > 5 / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << "   "; 

        for (int j = 1; j <= 5; j++) {
            if (j == 1 || i == 1 || i == 5 || (i == (5 + 1) / 2 && j > 5 / 2) || (j == 5 && i > 5 / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << "   "; 

        for (int j = 1; j <= 5; j++) {
            if (i == 1 || j == 1 || j == 5 || i == (5 + 1) / 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl; 
    }

    return 0;
}