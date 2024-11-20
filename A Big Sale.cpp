#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		double pi, qi, di, sum = 0.0, temp;

		cin>>n;
		while(n--) {
			cin>>pi>>qi>>di;
			temp = pi + (pi/100)*di;
			temp = temp - (temp / 100)*di;
			temp -= pi;
			sum += (temp * qi);
		}
		if(sum < 0)
			sum = -sum;
		cout<<fixed<<sum<<"\n";
	}
	return 0;
}
