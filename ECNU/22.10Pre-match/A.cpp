#include <bits/stdc++.h>
using namespace std;
class sNode
{
	public:
		int name;
		sNode* snext;
};
class Linkqueue
{
public:
	void initQ();
	void enQ(int name);
	void deQ();
	void pickQ(int name); 
	void destoryQ();
	int findQ();
private:
	sNode* front;
	sNode* rear;
};
int main()
{
    int n,p;
    cin>>n,p;
    Linkqueue data;
    data.initQ();
    int temp;
    for(int i=1;i<=p;i++)
    {
    	data.enQ(i);
	}
    for(int i=0;i<=n;i++)
    {
    	cin>>temp;
    	switch(temp)
    	{
    		case 1:
    			data.deQ();
    			break;
    		case 2:
    			cin>>temp;
    			data.pickQ(temp);
    			break;
    		case 3:
    			cout<<data.findQ()<<endl;
    			break;
		}
	}
    return 0;
}

void Linkqueue::initQ()
{
	sNode* p = new sNode;
	front = p;
	rear = p;
	p->snext = NULL;
	return;
}
void Linkqueue::enQ(int name)
{
	sNode* p = new sNode;
	p->name = name;
	rear->snext = p;
	rear = p;
	p->name = name;
	return;
}
int Linkqueue::findQ()
{
	if (rear == front)
	{
		return -1;
	}
	sNode* p;
	p = front->snext;
	return p->name;
}
void Linkqueue::deQ()
{
	if (rear == front)
	{
		return;
	}
	sNode* p;
	p = front->snext;
	front->snext = p->snext;
	Linkqueue::enQ(p->name);
	delete p;
	return;
}
void Linkqueue::destoryQ()
{
	while (rear != front)
		Linkqueue::deQ();
	delete front;
	return;
}
void Linkqueue::pickQ(int name)
{
	if (rear == front)
		return;
	sNode* p = front;
	sNode* p2 = front;
	do
	{
		p2 = p;
		p = p->snext;
	} while (p->name != name);
	
	sNode* p3;
	p3 = p2->snext;
	p2->snext = p3->snext;
	delete p3;
	
	sNode *exp;
	exp=front->snext;
	 	 
	sNode* px = new sNode;
	px->name = name;
	front->snext = px;
	px->snext = exp;
	
	return;
}
