#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, chef = 0, chefina = 0;
		string a,b;
		cin>>n>>a>>b;

		for(int i=0;i<n;i++) {
			if(a[i] == 'R' && b[i] == 'S')
				chef++;
			if(a[i] == 'S' && b[i] == 'R')
				chefina++;
			if(a[i] == 'P' && b[i] == 'S')
				chefina++;
			if(a[i] == 'S' && b[i] == 'P')
				chef++;
			if(a[i] == 'P' && b[i] == 'R')
				chef++;
			if(a[i] == 'R' && b[i] == 'P')
				chefina++;
		}
		cout<<(chef > chefina ? 0 : (chefina - chef)/2 + 1)<<"\n";
	}
	return 0;
}
