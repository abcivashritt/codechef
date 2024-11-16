#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, max_prod = 0, max_r = 0, prod, index = 0;
		cin>>n;
		vector < int > l(n), r(n);
		for(int i=0;i<n;i++)
			cin>>l[i];
		for(int i=0;i<n;i++)
			cin>>r[i];
		for(int i=0;i<n;i++) {
			prod = l[i] * r[i];
			if(prod > max_prod || (prod == max_prod && max_r < r[i])) {
				max_prod = prod;
				max_r = r[i];
				index = i;
			}
		}
		cout<<index+1<<"\n";
	}
	return 0;
}
