#include <iostream>
#include <vector>
using namespace std;

#define SIZE 1000

vector < int > multiply(vector < int > a, vector < int > b) {
	vector < int > ans(SIZE, 0);
	vector < vector < int > > inter(SIZE, vector < int > (SIZE, 0));
	int carry = 0;
	for(int i=SIZE - 1,x=0;i>=0 && x<=SIZE - 1;i--,x++) {
		carry = 0;
		for(int j=SIZE - 1,y=SIZE - 1-x;j>=0 && y>=0;j--, y--) {
			inter[x][y] = (a[j]*b[i] + carry)%10;
			carry = (a[j]*b[i] + carry)/10;
		}
	}
	carry = 0;
	for(int i=SIZE - 1;i>=0;i--) {
		int sum = 0;
		for(int j=0;j<=SIZE - 1;j++) {
			sum += inter[j][i];
		}
		ans[i] = (sum + carry) % 10;
		carry = (sum + carry) / 10;
	}
	return ans;
}

int main() {
	int t;
	cin>>t;
	vector < vector < int > > ele(101, vector < int > (SIZE, 0));
	ele[0][SIZE - 1] = 1;
	ele[1][SIZE - 1] = 1;
	for(int i=2;i<=100;i++) {
		vector < int > mul(SIZE, 0);
		int temp = i;
		int index = SIZE - 1;
		while(temp) {
			mul[index] = temp%10;
			index--;
			temp /= 10;
		}
		ele[i] = multiply(ele[i-1], mul);
	}
	while(t--) {
		int n;
		cin>>n;
		int i = 0;
		vector < int > ans = ele[n];
		for(;ans[i] == 0 && i<SIZE;i++)
			;
		for(;i<SIZE;i++)
			cout<<ans[i];
		cout<<"\n";
	}
	return 0;
}
