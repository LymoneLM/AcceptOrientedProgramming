#include <bits/stdc++.h>

using namespace std;


int main() {

    
    char data[12];
    int arrt[11]={};
    int arr[11]={};
    int index[12]={};

    cin>>data;
    for(int i=0;i<11;i++){
        ++arrt[data[i]-='0'];
    }
    int t=0;
    for(int i=9;i>=0;i--){
        if(arrt[i]>0)
            arr[t++]=i;
    }
    for(int i=0;i<11;i++){
        for(int m=0;m<t;m++){
            if(data[i]==arr[m]){
                index[i] = m;
            }
        }
    }
    cout<<"int[] arr = new int[]{";
    for(int i=0;i<t;i++){
        cout<<arr[i]<<",}"[((i==t-1)?1:0)];
    }
    cout<<";\n";
    cout<<"int[] index = new int[]{";
    for(int i=0;i<11;i++){
        cout<<index[i]<<",}"[((i==10)?1:0)];
    }
    cout<<";\n";
    return 0;
}