#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n != 0) {
		vector < int > a(n), amb(n);
		bool ans = true;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			a[i]--;
			amb[a[i]]=i;
		}
		for(int i=0;i<n;i++) {
			if(a[i] != amb[i])
				ans =false;
		}
		cout<<(ans ? "ambiguous" : "not ambiguous")<<"\n";
		cin>>n;
	}
	return 0;
}
