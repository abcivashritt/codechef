#include <iostream>
#include <set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		set < string > ing;
		string s;
		for(int i=0;i<8;i++) {
			cin>>s;
			ing.insert(s);
		}
		cout<<(ing.size() > 6 ? "dissimilar" : "similar")<<"\n";
	}
	return 0;
}
