#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int data[20010];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    sort(data,data+n);
    cout<<data[n/2];
    return 0;
}