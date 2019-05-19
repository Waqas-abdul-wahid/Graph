#include "Node.h"
#include<iostream>
Node::Node(int data){
	this->data=data;
	next=NULL;
	n=NULL;
	is_visited=false;
}
