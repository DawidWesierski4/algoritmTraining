#include <iostream>
#include <list>
#include "graphTraining_main.h"

class Graph{
	int V;
	std::list<int> *l;

public:
	Graph(int v)
	{
		V = v;
		l = new std::list<int>[V];
	}

	/*
	 *  addEdge
	 * adds edge to adjacency list
	 * @i = starting node
	 * @j = end node
	 * @dir = directed connection
	 */
	void addEdge(int i, int j, bool dir=false)
	{
		l[i].push_back(j);
		if (!dir)
			l[j].push_back(i);
	}

	void printAdjList()
	{
		std::cout<<"---"<<std::endl;
	}


};

void graph_printLogo() {
	std::cout<<" ██████╗ ██████╗  █████╗ ██████╗ ██╗  ██╗███████╗"<<std::endl;
	std::cout<<"██╔════╝ ██╔══██╗██╔══██╗██╔══██╗██║  ██║██╔════╝"<<std::endl;
	std::cout<<"██║  ███╗██████╔╝███████║██████╔╝███████║███████╗"<<std::endl;
	std::cout<<"██║   ██║██╔══██╗██╔══██║██╔═══╝ ██╔══██║╚════██║"<<std::endl;
	std::cout<<"╚██████╔╝██║  ██║██║  ██║██║     ██║  ██║███████║"<<std::endl;
	std::cout<<" ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝  ╚═╝╚══════╝"<<std::endl;
}

int main() {

	graph_printLogo();
	Graph g(6);

	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,1);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,5);

	g.printAdjList();
}
