#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, m;
		bool spoon = false;
		cin>>n>>m;
		vector < string > s(n);
		for(int i=0;i<n;i++) {
			cin>>s[i];
			for(int j=0;j<m;j++) {
				if(s[i][j] >= 'A' && s[i][j] <= 'Z')
					s[i][j] = char(s[i][j] - 'A' + 'a');
			}
		}
		for(int i=0;i<n && !spoon;i++) {
			for(int j=0;j<m-4 && !spoon;j++) {
				if(s[i][j] == 's' &&
						s[i][j+1] == 'p' &&
						s[i][j+2] == 'o' &&
						s[i][j+3] == 'o' &&
						s[i][j+4] == 'n')
					spoon = true;
			}
		}
		for(int i=0;i<m && !spoon;i++) {
			for(int j=0;j<n-4 && !spoon;j++) {
				if(s[j][i] == 's' &&
						s[j+1][i] == 'p' &&
						s[j+2][i] == 'o' &&
						s[j+3][i] == 'o' &&
						s[j+4][i] == 'n')
					spoon = true;
			}
		}
		cout<<(spoon ? "There is a spoon!" : "There is indeed no spoon!")<<"\n";
	}
	return 0;
}
