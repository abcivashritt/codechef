#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	long long sum = 0;
	cin>>n;
	vector < int > a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	for(int i=1;i<n;i++) {
		sum += (a[i] * a[i-1]);
	}
	cout<<sum<<"\n";
	return 0;
}