#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, bi, a = 0, b = 0, dist = 0;

		cin>>n;
		vector < long long > ai(n);
		for(int i=0;i<n;i++)
			cin>>ai[i];
		for(int i=0;i<n;i++) {
			cin>>bi;
			if(a == b && ai[i] == bi)
				dist += min(ai[i], bi);
			a += ai[i];
			b += bi;
		}
		cout<<dist<<"\n";
	}
	return 0;
}
