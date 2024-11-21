#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, x, marks, a=0, b=0;

		cin>>n>>x;
		a = (x+2)/3;
		marks = a*3;
		while(marks > x) {
			marks--;
			b++;
		}
		if(a+b <= n)
			cout<<"YES\n"<<a<<" "<<b<<" "<<n-b-a<<"\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
