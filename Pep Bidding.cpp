#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,atta = 0, attp = 0,defa = 0,defp = 0;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			atta += temp;
		}
		for(int i=0;i<n;i++) {
			cin>>temp;
			defa += temp;
		}
		for(int i=0;i<n;i++) {
			cin>>temp;
			attp += temp;
		}
		for(int i=0;i<n;i++) {
			cin>>temp;
			defp += temp;
		}
		cout<<((atta > attp && defa > defp) ? "A" : ((attp > atta && defp > defa) ? "P" : "DRAW"))<<"\n";
	}
	return 0;
}
