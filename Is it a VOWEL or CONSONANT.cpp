#include <iostream>
using namespace std;

int main() {
	char c;
	cin>>c;
	cout<<((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? "VOWEL" : "CONSONANT")<<"\n";
	return 0;
}
