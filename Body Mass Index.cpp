#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int m,h;
		cin>>m>>h;
		m = m/(h*h);
		cout<<(m <= 18 ? 1 : (m <= 24 ? 2 : (m <= 29 ? 3 : 4)))<<"\n";
	}
	return 0;
}
