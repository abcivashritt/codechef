#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int temp;
		vector < pair < int, int > > count(16);
		vector < int > index(16);

		for(int i=0;i<16;i++) {
			cin>>temp;
			count[i] = pair < int, int > (temp, i);
		}
		sort(count.begin(), count.end());

		for(int i = 1;i <= 16;i++)
			index[count[i-1].second] = (int)log2(i);
		for(int i=0;i<16;i++)
			cout<<index[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
