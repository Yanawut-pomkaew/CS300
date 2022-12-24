#include <iostream>
using namespace std;


int main() {

    int n;
    cin >> n;

    int a[n];
    int b[n];

    int resultA = 0;
    int resultB = 0;

    for (int i = 0; i < n; ++i) {

        cin >> a[i] >> b[i];

    }


    for (int i = 0 ; i< n; ++i) {
    
        if(a[i] - b[i] == 1) {
            resultA++;
        }else if(a[i] - b[i] == 2) {
            resultB++;
        }else if(b[i] - a[i] == 1) {
            resultB++;
        }else if(b[i] - a[i] == 2) {
            resultA++;
        }

    }

    if(resultA > resultB) {
        cout << "1" << "\n";
    }else if (resultA < resultB) {
        cout << "2" << "\n";
    }else {
        cout << "0" << "\n";
    }

    cout << 5*(abs(resultA-resultB));


    return 0;

}