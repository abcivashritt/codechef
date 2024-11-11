#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double s;
		cin>>s;
		double hra = (s<1500 ? s*0.10 : 500.0);
		double da = (s<1500 ? s*0.90 : s*0.98);
		cout<<fixed<<s+da+hra<<"\n";
	}
	return 0;
}
