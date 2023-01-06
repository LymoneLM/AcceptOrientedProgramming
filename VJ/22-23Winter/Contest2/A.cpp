#include <iostream>
#include <cstring>
using namespace std;
struct node{
    int data;
    node *next;
};
int a,b;int n;
void findab();
bool is_inlaw();
int input(){
    char data1[10],data2[10];int c=0;
    scanf("%s",data1);
    if(strcmp(data1,"quit")==0)
        return -1;
    else if (strcmp(data1,"move")==0)     
        c+=1;
    scanf("%d %s %d",&a,data2,&b);
    if (strcmp(data2,"onto")==0)     
        c+=4;
    findab();
    if(is_inlaw()==false)
        return 2;
    return c;
}
node* endof(node*p)
{
    return p->next==NULL?p:endof(p->next);
}
node *ppa,*pa,*ppb,*pb;
node block[30];
void findab(){
    for(int i=0;i<n;i++){
        node* p=&block[i];
        while(p->next!=NULL){
            if(p->next->data==a){
                ppa=p;
                pa=p->next;
            }
            if(p->next->data==b){
                ppb=p;
                pb=p->next;
            }
            p=p->next;
        }
    }
}
bool is_inlaw(){
    if(endof(pa)==endof(pb))
        return false;
    else    
        return true;
}
int main(){
    cin>>n; 
    node *pp,*p;
    for(int i=0;i<n;i++){
        block[i].next=new node;
        block[i].next->data=i;
        block[i].next->next=NULL;
    }
    while(true){
        switch(input()){
                //move onto 5
                //move over 1
                //pile onto 4
                //pile over 0
            case -1:
                goto quit;
            case 0:
                ppa->next=NULL;
                p=endof(pb);
                p->next=pa;
                break;
            case 2:
            //  not in law
                break;
            case 1:
                ppa->next=NULL;
                p=endof(pb);
                p->next=pa;
                p=pa;
                while(p->next!=NULL){
                    pp=p;
                    block[p->next->data].next=p->next;
                    p=p->next;
                    pp->next=NULL;
                }
                break;
            case 4:
                p=pb;
                while(p->next!=NULL){
                    pp=p;
                    block[p->next->data].next=p->next;
                    p=p->next;
                    pp->next=NULL;
                }
                pb->next=pa;
                ppa->next=NULL;
                break;
            case 5:
                p=pa;
                while(p->next!=NULL){
                    pp=p;
                    block[p->next->data].next=p->next;
                    p=p->next;
                    pp->next=NULL;
                }
                p=pb;
                while(p->next!=NULL){
                    pp=p;
                    block[p->next->data].next=p->next;
                    p=p->next;
                    pp->next=NULL;
                }
                ppa->next=NULL;
                pb->next=pa;
                break;
        }
    }
quit:
    for(int i=0;i<n;i++){
        printf("%d:",i);
        node* p=&block[i];
        while(p->next!=NULL){
            printf(" %d",p->next->data);
            p=p->next;
        }
        printf("\n");
    }
    return 0;
}