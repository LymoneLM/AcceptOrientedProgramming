//POJ 1363
#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
int a[20000];
bool func(int n){
    int temp=1;int p=0;
    while(st.size())
        st.pop();
    while(p!=n){
        if(temp==n+2)
            return false;
        if(st.empty())
            st.push(temp++);
        if((a[p]==st.top()))
            st.pop(),++p;
        else
            st.push(temp++);
    }
    return true;
}
int main(){
    int n;cin>>n;
    while(n!=0){
        cin>>a[0];
        while(a[0]!=0){
            for(int i=1;i<n;i++)
                cin>>a[i];
            if(func(n)) cout<<"Yes\n";
                else cout<<"No\n";         
            cin>>a[0]; 
        }
        cout<<endl;
        cin>>n;
    }
    return 0;
}