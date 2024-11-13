#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,limak, bob;
		cin>>a>>b;
		limak = sqrt(a);
		bob = max(0, (int)sqrt(b) - 1);
		while(((bob + 1) * (bob + 1) + (bob+1)) <= b)
			bob++;
		cout<<(limak <= bob ? "Bob" : "Limak")<<"\n";
	}
	return 0;
}
