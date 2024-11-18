#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,u,d,curr,count = 1;
		bool parachute_used = false;

		cin>>n>>u>>d;
		vector < int > h(n);
		for(int i=0;i<n;i++)
			cin>>h[i];

		curr = h[0];
		for(int i=1;i<n;i++) {
			if(h[i] > curr && h[i] <= curr + u)
				count++;
			else if(h[i] < curr) { 
				if(h[i] >= curr - d)
					count++;
				else if(!parachute_used) {
					count++;
					parachute_used = true;
				}
				else
					break;
			}
			else if(h[i] == curr)
				count++;
			else
				break;
			curr = h[i];
		}
		cout<<count<<"\n";
	}
	return 0;
}
