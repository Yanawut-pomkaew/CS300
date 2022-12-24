#include <iostream>
using namespace std;

int main() {

    cin.tie(0);

    string s;
    cin >> s;

    char math[58] = {'1', '2', '3', '4' ,'5', '6' ,'7' ,'8' ,'9' , 'A' , 'B' , 'C' , 'D' , 'E', 'F', 'G' , 'H', 'J', 'K', 'L' , 'M' , 'N' , 'P' , 'Q' , 'R', 'S' , 'T', 'U', 'V', 'W', 'X' , 'Y' , 'Z' , 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' , 'j', 'k' , 'm' , 'n' , 'o', 'p' , 'q' , 'r', 's', 't', 'u', 'v','w','x','y','z'};
    int ans = 0;

    for (int i = 0; i < s.length(); ++i) {

       int found = 0;
       
       for (int j= 0; j < 58; ++j) {
            if(math[j] == s[i]) {
                ans+=j;
                found = 1;
                break;
            }
       }

       if(found == 0) {
         ans = ans - 1;
       }
    }

    cout << ans;

    return 0;
}