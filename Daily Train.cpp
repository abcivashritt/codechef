#include <iostream>
using namespace std;

int nCk(int n, int k) {
	int ret = 1;
	k = min(k, n-k);
	for(int i=0;i<k;i++,n--)
		ret *= n;
	for(int i=0;i<k;i++)
		ret /= (i+1);
	return ret;
}
int main() {

	int x, n, count = 0, ans = 0;
	string s;
	cin>>x>>n;
	while(n--) {
		cin>>s;
		for(int i = 0, j = 53;i < j;i += 4, j -= 2) {
			count = 0;
			for(int k = 0;k < 4;k++)
				if(s[i+k] == '0')
					count++;
			if(s[j] == '0')
				count++;
			if(s[j-1] == '0')
				count++;
			if(count >= x)
				ans += nCk(count, x);
		}
	}
	cout<<ans<<"\n";
	return 0;
}
