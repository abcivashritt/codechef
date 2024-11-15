#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp, sum = 0;
		cin>>n;
		vector < pair < int, int > > fruits;
		vector < int > temp_arr(n);
		vector < bool > done(n, false);

		for(int i=0;i<n;i++)
			cin>>temp_arr[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp > 0)
				fruits.push_back(pair < int, int > (temp, temp_arr[i]));	
		}


		sort(fruits.rbegin(), fruits.rend());
		for(int i=0;i<fruits.size();i++) {
			if(!done[fruits[i].second]) {
				sum += fruits[i].first;
				done[fruits[i].second] = true;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}
