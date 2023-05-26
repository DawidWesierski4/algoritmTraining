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
	 * @dir = directed connection flag
	 */
	void addEdge(int i, int j, bool dir=false)
	{
		l[i].push_back(j);
		if (!dir)
			l[j].push_back(i);
	}

	void printAdjList()
	{
		for (int i = 0; i < V; i++) {
			std::cout<<"========================"<<i;
			std::cout<<"========================"<<std::endl;
			for (auto node:l[i]) {
				std::cout << node << "   ";
			}
			std::cout<<std::endl;
		}
	}


};

int graph_forceFindCommon(std::vector<int> arr1, std::vector<int> arr2)
{
	for(auto i:arr1) {
		for (auto j:arr2) {
			if(i == j)
				return i;
		}
	}
	return -1;
}

class Node {
	public:
	std::string name;
	/* contains neighbours */
	std::list<std::string> nbrs;

	Node(std::string name) {
		this->name = name;
	}
};

class simple_starGraph {
public:
	int findCenter(std::vector<std::vector<int>>& edges) {
		return graph_forceFindCommon(edges[0], edges[1]);
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
