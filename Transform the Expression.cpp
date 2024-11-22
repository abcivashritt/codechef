#include <iostream>
#include <stack>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        stack < string > st;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++) {
            while(i < s.length() && s[i] != ')') {
                st.push(string(1, s[i]));
                i++;
            }
            if(i < s.length()) {
                string s1,s2, s3;

                s1 = st.top();
                st.pop();
                s2 = st.top();
                st.pop();
                s3 = st.top();
                st.pop();
                st.pop();
                st.push((s3 + s1 + s2));
            }
        }
        cout<<st.top()<<"\n";
    }
    return 0;
}
