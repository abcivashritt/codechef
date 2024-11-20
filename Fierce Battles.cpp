#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m,ci,li, sum = 0;
		vector < int > soi(101, 0), sof(101, 0);
		cin>>n>>m;
		while(n--) {
			cin>>ci>>li;
			soi[li] += ci;
		}
		while(m--) {
			cin>>ci>>li;
			sof[li] += ci;
		}
		for(int i=1;i<=100;i++) {
			if(sof[i] > soi[i])
				sum += (sof[i] - soi[i]);
		}
		cout<<sum<<"\n";
	}
	return 0;
}
