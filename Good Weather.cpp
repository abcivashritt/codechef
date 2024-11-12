#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int sunny = 0, rainy = 0;
		bool temp;
		for(int i=0;i<7;i++) {
			cin>>temp;
			temp?sunny++:rainy++;
		}
		cout<<(sunny > rainy ? "YES" : "NO")<<"\n";
	}
	return 0;
}
