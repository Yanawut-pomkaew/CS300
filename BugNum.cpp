#include <iostream>
using namespace std;

int main() {

    string bug;
    cin >> bug;

    int c[5] = {'A','B','C','D','E'};
    int a[5];

    for (int i = 0; i < 5; ++i) {
        a[i] = 0;
    }

    for (int i = 0 ; i < bug.length() ; ++i) {

        for (int j = 0; j < 5; ++j) {
            
            if(c[j] == bug[i]) {
                
                a[j] += 1;
            }
        }
    }

    for (int i = 0; i < 5 ; ++i) {
        cout << a[i] << "\n";
    }


    return 0;
}