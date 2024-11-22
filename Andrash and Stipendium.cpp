#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int fail = 0, full = 0, n, ai;
		double avg = 0.0;

		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>ai;
			if(ai <= 2)
				fail++;
			if(ai == 5)
				full++;
			avg += ai;
		}
		avg = avg / (double)n;
		cout<<((fail == 0 && full > 0 && avg >= 4.0) ? "Yes" : "No")<<"\n";
	}
	return 0;
}
