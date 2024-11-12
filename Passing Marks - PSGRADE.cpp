#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a_min, b_min, c_min, t_min, a, b, c;
		cin>>a_min>>b_min>>c_min>>t_min>>a>>b>>c;
		cout<<((a >= a_min && b >= b_min && c >= c_min && a+b+c >= t_min) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
