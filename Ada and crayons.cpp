#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a[2] = {0, 0}, first = 0;
        string s;
        auto index = [](char c) {
            return (c == 'U' ? 0 : 1);
        };
        cin>>s;
        for(int i=1;i<s.length();i++) {
            if(s[i] != s[i-1]) {
                a[index(s[i-1])]++;
                first = i;
            }
        }
        if(s.length() > 1 && first > 0)
            a[index(s[s.length()-1])]++;
        cout<<min(a[0], a[1])<<"\n";
    }
    return 0;
}
