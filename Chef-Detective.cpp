#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, temp;
	cin>>n;
	vector < bool > occ(n+1, false);
	while(n--) {
		cin>>temp;
		occ[temp] = true;
	}	
	for(int i=0;i<occ.size();i++) {
		if(!occ[i])
			cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
