#include "Node.cpp"
#include<iostream>
#include <queue>
class Graph{
private:
	int vertices;
	Node *head;
	public:
		Graph(int vertices);
		void printgraph();
		void addEdge(int u,int v);
		void findoutdegree(int u);
		void findindegree(int u);
        Node *getHeadValue();
        void BFS(std::queue<Node*>q);
        void shortest();
};
