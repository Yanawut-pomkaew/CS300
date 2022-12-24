#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ;i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    
    int k = 0;

    while(m > 1) {
        k++;
        m = m >> 1;
    }
    

    for (int i = 0 ; i < n ; ++i) {
        cout << a[i] << "\n";
    }

    for (int i = 0 ; i < k; ++i) {
        cout << "0\n";
    }

    return 0;

}