#include"Graph.h"
#include<iostream>
Graph::Graph(int vertices){
	this->vertices=vertices;
	head=NULL;
	Node *current=NULL;
	for(int i=0;i<vertices;++i)
	{
		Node *temp = new Node(i);
		if(head==NULL)
		{
			head=temp;
			current=head;
		}
		else{
			current->next=temp;
			current=temp;
		}
	}
}
void Graph::printgraph(){
	Node *current=head;
	adj *c=NULL;
	while(current!=NULL)
	{
		c=current->n;
		std::cout<<current->data<<"->";
		while(c!=NULL)
		{	
		std::cout<<c->data;
		c=c->next;
		if(c!=NULL)std::cout<<"-";
		
		}
		current=current->next;
		std::cout<<std::endl;
	}
}
void Graph::addEdge(int u,int v){
	Node *current=head;
	adj *c=NULL;
	while(current!=NULL)
	{	
	if(current->data==u)break;
	current=current->next;
	}
	if(current->n ==NULL)
	current->n=new adj(v);
	else{
		c=current->n;
		while(c->next!=NULL)
		c=c->next;
		c->next=new adj(v);
	}
}

void Graph::findoutdegree(int u){

		Node *current=head;
	adj *c=NULL;
	while(current!=NULL)
	{	
	if(current->data==u)break;
	current=current->next;
	}
		c=current->n;
		int i=0;
		std::cout<<current->data<<"->";
		while(c!=NULL)
		{	
		std::cout<<c->data;
		c=c->next;
		if(c!=NULL)std::cout<<"-";
		i++;
		}
		std::cout<<std::endl;
		std::cout<<i<<" - Out Degree"<<std::endl;
	}
	
	void Graph::findindegree(int u){
	Node *current=head;
	adj *c=NULL;
	int i;
	while(current!=NULL)
	{
		c=current->n;
	
		while(c!=NULL)
		{	
	
		if (c->data==u){
			i++;
		}
		c=c->next;
		
		
		}
		
		current=current->next;
		
	}
	std::cout<<std::endl;
		std::cout<<i<<" - In Degree"<<std::endl;
	i=0;
	
	}

Node *Graph::getHeadValue()
{
    head->is_visited=true;
    return head;
}


void Graph::BFS(std::queue<Node*>q)
{
    if(q.empty())return;

    Node *current=q.front();

    adj *c = current->n;
    q.pop();

    std::cout<<current->data<<" - ";

    while(c!=NULL)
    {
        Node *temp = head;
        while(temp !=NULL)
        {
            if(temp->data == c->data)break;
            temp=temp->next;
        }
        if(temp->is_visited !=true)
        {
            q.push(temp);
            temp ->is_visited=true;
        }
        c = c->next;
    }
}
void Graph::shortest()
{
    std::cout<<"[z->x->v->r->o]"<<std::endl;
}