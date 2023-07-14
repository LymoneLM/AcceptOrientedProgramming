#include <bits/stdc++.h>
#pragma GCC optimize(2)
#define endl "\n"
#define ll long long
#define mm(a) memset(a,0,sizeof(a))
using namespace std;
class KMP {
private:
    string pat;
    int *next;
    vector<int> ans;
public:
    KMP(string _pat) {
        pat = _pat;
        next = new int[pat.length()];
        for(int i=1,j=next[0]=0;i<pat.length();next[i++]=pat[i]==pat[j]?++j:j)
            while(j>0&&pat[i]!=pat[j])j=next[j-1];
    }
    int find(string text) {
        for (int i = 0, j = 0; i < text.length(); i++) {
            while (j > 0 && text[i] != pat[j]) j = next[j - 1];
            if (text[i] == pat[j]) j++;
            if (j == pat.length()) ans.push_back(i - j + 1);
        }
        if(ans.size()!=0)
            return 1;
        return -1;
    }
    ~KMP() { delete[] next; }
};
const long long mod = long long (1e9+7);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    KMP kmp("6161");
    string dat;
    cin>>dat;
    long long cnt=0;
    if(kmp.find(dat)==-1)
        
    return 0;
}