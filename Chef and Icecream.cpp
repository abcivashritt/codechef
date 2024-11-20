#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, fives = 0, tens = 0;
		bool melted = false;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		int i = 0;
		while(i < n) {
			while(i < n && a[i] == 5) {
				fives++;
				i++;
			}
			while(i < n && a[i] == 10) {
				fives--;
				tens++;
				i++;
			}
			while(i < n && a[i] == 15) {
				if(tens > 0)
					tens--;
				else
					fives -= 2;
				i++;
			}
			if(fives < 0) {
				melted = true;
				break;
			}
		}
		cout<<(melted ? "NO" : "YES")<<"\n";
	}
	return 0;
}
