#include <iostream>
#include <cstdio>
using namespace std;
struct node{
    string name;
    node* next;
};
int main(){
    int N;cin>>N;
    node *p,*pp;
    node head;
    pp=&head;
    for(int i =0;i<N;i++){
        p=new node;
        cin>>p->name;
        pp->next=p;
        pp=p;
    }
    p->next=head.next;
    int W,S;
    scanf("%d,%d",&W,&S);
    int num=0,temp=0;
    p=&head;
    while(temp!=W-1){
        p=p->next;
        ++temp;
    }
    temp=0;
    while(num!=N){
        if(temp==S){
            ++num;
            pp->next=p->next;
            cout<<p->name<<endl;
            temp=0;
        }
        pp=p;
        p=p->next;
        ++temp;
    }
} 