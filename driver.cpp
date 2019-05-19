#include"Graph.cpp"
#include<iostream>
#include<queue>
int main()
{
	Graph *graph = new Graph(5);
	graph->addEdge(0,1);
	graph->addEdge(0,2);
	graph->addEdge(0,3);
	graph->addEdge(1,3);
	graph->addEdge(2,3);
	graph->addEdge(2,4);
	graph->addEdge(3,4);
	graph->addEdge(4,2);
//	graph->printgraph();
	std::cout<<"Out Degrees Of Vertices \n"<<std::endl;
	graph->findoutdegree(0);
	graph->findoutdegree(1);
	graph->findoutdegree(2);
	graph->findoutdegree(3);
	graph->findoutdegree(4);
	std::cout<<"\nIn Degrees Of Vertices \n"<<std::endl;
	std::cout<<"For 0";
	graph->findindegree(0);
	std::cout<<"For 1";
	graph->findindegree(1);
	std::cout<<"For 2";
	graph->findindegree(2);
	std::cout<<"For 3";
	graph->findindegree(3);
	std::cout<<"For 4";
	graph->findindegree(4);
	
//assignment 13 

std::queue<Node*> myqueue;

myqueue.push(graph->getHeadValue());

std::cout<<"traversal : BFS For Shortest path "<<std::endl;
graph->BFS(myqueue);

graph->shortest();
return 0;
}