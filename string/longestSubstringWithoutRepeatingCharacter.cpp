//leetcode number 03
#include<iostream>
#include<vector>
using namespace std;

int solve(string& s){
        vector<int>v(256, -1);
        int n = s.size();
        int i = 0;
        int j = 0;
        int maxLen = 0;
        while(j < n) {
            int len = 0;
            if(v[s[j]] != -1){
                if(v[s[j]] >= i) {
                    i = v[s[j]] + 1;
                }
            }
            len = j - i + 1;
            maxLen = max(len, maxLen);
            v[s[j]] = j;
            j++;
        }
        return maxLen;
    }

int main(){
    string s = "bbbb";
    int ans = solve(s);
    cout<<ans<<endl;
}