#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		if(n%2 == 0) {
			vector < int > a(n);
			for(int i=0;i<n;i++)
				a[i] = i+1;
			for(int i=0;i<n;i+=2)
				swap(a[i], a[i+1]);
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<"\n";
		}
		else
			cout<<-1<<"\n";
	}
	return 0;
}
