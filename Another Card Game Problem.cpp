#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int pc, pr;
		cin>>pc>>pr;

		pc = (pc + 8)/9;
		pr = (pr + 8)/9;

		cout<<(pc < pr ? 0 : 1)<<" "<<(pc < pr ? pc : pr)<<"\n";
	}
	return 0;
}
