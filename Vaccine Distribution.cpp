#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,d, temp, norm_count = 0, risk_count = 0;

		cin>>n>>d;
		while(n--) {
			cin>>temp;
			if(temp >= 80 || temp <=9)
				risk_count++;
			else
				norm_count++;
		}
		cout<<(norm_count + d - 1) / d + (risk_count + d - 1) / d<<"\n";
	}
	return 0;
}
