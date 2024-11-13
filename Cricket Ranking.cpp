#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int temp,a=0;
		vector < int > stat(3);
		for(int i=0;i<3;i++)
			cin>>stat[i];
		for(int i=0;i<3;i++) {
			cin>>temp;
			if(temp < stat[i])
				a++;
		}
		cout<<(a > 3-a ? "A" : "B")<<"\n";
	}
	return 0;
}
