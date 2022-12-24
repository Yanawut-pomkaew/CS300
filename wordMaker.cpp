#include <iostream>
using namespace std;

int main() {
	
	string s;
	cin >> s; 
	
	int match = 1; 
	int max = 0;
	int hit = 1;
	int min = 999999;
	char a = s[0]; 
	
	int y = 0;

	for (int i = 1; i < s.length() ; ++i) {
		if(a == s[i]) {
			match++;
		}else {
			a = s[i];
			
			if(min > match) {
				min = match; 
				match = 1;
			}
		}
	}
	
	for (int i = 0 ; i < s.length()-1 ; ++i) {
		
		for (int j = i+1 ; j < s.length() ; ++j) {
			
			if(s[i] == s[j]) {
				hit++; 
				
			}
		}
		
		if(hit > max) {
			max = hit;	
		}
		
		hit = 1; 
		
	}
	
	cout << min <<"\n" <<max;
	
	return 0;
}