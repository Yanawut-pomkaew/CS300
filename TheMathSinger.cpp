#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n][n-1];

    int result[n];

    int resultAns = 0;
    int WinnerNo;

    for (int i = 0; i < n; ++i) {

        result[i] = 0;

        for (int j = 0; j < n-1 ; ++j) {

            cin >> a[i][j];
            result[i] +=a[i][j];
        }

        if(result[i] > resultAns) {
            WinnerNo = i+1;
            resultAns = result[i];
        }
    }

    cout << WinnerNo << "\n" << resultAns;

    return 0;
}