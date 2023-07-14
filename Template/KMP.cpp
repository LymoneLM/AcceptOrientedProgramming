#include <bits/stdc++.h>
using namespace std;
class KMP {
private:
    string pat;
    int *next;
public:
    KMP(string _pat) {
        pat = _pat;
        next = new int[pat.length()];
        next[0] = 0;
        for (int i = 1, j = 0; i < pat.length(); i++) {
            while (j > 0 && pat[i] != pat[j])
                j = next[j - 1];
            if (pat[i] == pat[j])
                j++;
            next[i] = j;
        } 
    }    
    int find(string text) {
        for (int i = 0, j = 0; i < text.length(); i++) {
            while (j > 0 && text[i] != pat[j])
                j = next[j - 1];
            if (text[i] == pat[j])
                j++;
            if (j == pat.length())
                return i - j + 1;
        }
        return -1;
    }
    void print(){
        int len = pat.length();
        cout<<0<<" "<<-1<<'\n';
        for(int i=1;i<len;i++)
            cout<<i<<" "<<next[i-1]<<'\n';
    }
    vector<int> count(string text) {
        vector<int>ans;
        for (int i = 0, j = 0; i < text.length(); i++) {
            while (j > 0 && text[i] != pat[j])
                j = next[j - 1];
            if (text[i] == pat[j])
                j++;
            if (j == pat.length())
                ans.push_back(i - j + 1);
        }
        return ans;
    }
    ~KMP() { delete[] next; }
};
int main() {
    KMP kmp("abababaabab");
    kmp.print();
    cout<<kmp.count("hellollpchill").size();
}