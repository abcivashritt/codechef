#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, score = 0;
		string cor, chef;

		cin>>n>>cor>>chef;

		for(int i=0;i<n;i++) {
			if(chef[i] != 'N') {
				if(chef[i] == cor[i])
					score++;
				else
					i++;
			}
		}
		cout<<score<<"\n";
	}
	return 0;
}
