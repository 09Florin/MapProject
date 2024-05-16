#include <iostream>
#include <string>
#include <vector>
#define VERTEX 20 // 20 cities
using namespace std;

struct AdjacencyMatrix {
	string vertex[VERTEX];
	int edges[VERTEX][VERTEX];
	int isTraversed[VERTEX] = { 0 };
	vector<int> path;
	vector<pair<vector<int>, int>> pathcost;
};
class Solution {
public:
	void createGraph(AdjacencyMatrix& graph) {
		//							  00  01  02  03  04  05  06  07  08  09  10  11  12  13  14  15  16  17  18  19 
		int map[VERTEX][VERTEX] = { {  0, 75, -1,118, -1, -1, -1,140, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },//0 -  Arad
									{ -1,  0, 71, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },//1 -  Zerind
									{ -1, -1,  0, -1, -1, -1, -1,151, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },//2 -  Oradea
									{ -1, -1, -1,  0,111, -1, -1, -1, -1, -1, -1, -1, -1, -1  -1, -1, -1, -1, -1, -1 },//3 -  Timisoara
									{ -1, -1, -1, -1,  0, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },//4 -  Lugoj
									{ -1, -1, -1, -1, -1,  0, 75, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },//5 -  Mehadia
									{ -1, -1, -1, -1, -1, -1,  0, -1, -1,120, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },//6 -  Drobeta
									{ -1, -1, -1, -1, -1, -1, -1,  0, 80, -1, 99, -1, -1, -1, -1, -1, -1, -1, -1, -1 },//7 -  Sibiu
									{ -1, -1, -1, -1, -1, -1, -1, -1,  0,146, -1, 97, -1, -1, -1, -1, -1, -1, -1, -1 },//8 -  Ramnicu Valcea
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, -1,138, -1, -1, -1, -1, -1, -1, -1, -1 },//9 -  Craiova
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, -1,211, -1, -1, -1, -1, -1, -1, -1 },//10 - Fagaras
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0,101, -1, -1, -1, -1, -1, -1, -1 },//11 - Pitesti
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, 90, 85, -1, -1, -1, -1, -1 },//12 - Bucuresti
		                            { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, -1, -1, -1, -1, -1, -1 },//13 - Giurgiu
		                            { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, 98, -1,142, -1, -1 },//14 - Urziceni
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, 86, -1, -1, -1 },//15 - Hirsova
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, -1, -1, -1 },//16 - Eforie
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, 92, -1 },//17 - Vaslui
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0, 87 },//18 - Iasi
									{ -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,  0 } //19 - Neamt
		};//20 points = 20 cities
		for (int i = 0; i < VERTEX; i++)
			for (int j = 0; j < VERTEX; j++)
				if (map[i][j] != -1)
					map[j][i] = map[i][j];
		memcpy(graph.edges, map, sizeof(map));
		graph.vertex[0] = "Arad";
		graph.vertex[1] = "Zerind";
		graph.vertex[2] = "Oradea";
		graph.vertex[3] = "Timisoara";
		graph.vertex[4] = "Lugoj";
		graph.vertex[5] = "Mehadia";
		graph.vertex[6] = "Drobeta";
		graph.vertex[7] = "Sibiu";
		graph.vertex[8] = "Rimnicu-Vilcea";
		graph.vertex[9] = "Craiova";
		graph.vertex[10] = "Fagaras";
		graph.vertex[11] = "Pitesti";
		graph.vertex[12] = "Bucuresti";
		graph.vertex[13] = "Giurgiu";
		graph.vertex[14] = "Urziceni";
		graph.vertex[15] = "Hirsova";
		graph.vertex[16] = "Eforie"; 
		graph.vertex[17] = "Vaslui";
		graph.vertex[18] = "Iasi";
		graph.vertex[19] = "Neamt";
	}

	int nextOutdegree(AdjacencyMatrix graph, int interrupt, int loc) {
		for (int index = interrupt + 1; index < VERTEX; index++) {
			if (graph.edges[loc][index] > 0 && graph.isTraversed[index] == 0)
				return index;
		}
		return -1;
	}
	int computePathCost(AdjacencyMatrix graph) {
		int cost = 0, index = 0;
		for (; index < graph.path.size() - 1; index++)
			cost += graph.edges[graph.path[index]][graph.path[index + 1]];
		cost += graph.edges[graph.path[index]][12];
		return cost;
	}
	int minimumPathCost(vector<pair<vector<int>, int>> pathcost) {
		int minIndex = 0, index = 1;
		for (; index < pathcost.size(); index++)
			if (pathcost[minIndex].second >= pathcost[index].second)
				minIndex = index;
		return minIndex;
	}
	void depthFirstSearch(AdjacencyMatrix& graph, int start, int end) {
		int loc = 0, cost = 0;
		graph.isTraversed[start] = 1;
		graph.path.push_back(start);
		while ((loc = nextOutdegree(graph, loc, start)) != -1) {
			if (loc == end) {
				cout << "Path: ";
				for (int now = 0; now < graph.path.size(); now++) {
					cout << graph.vertex[graph.path[now]] << " ";
					cost = computePathCost(graph);
					graph.pathcost.push_back(pair<vector<int>, int>(graph.path, cost));
				}
				cout << graph.vertex[end] << ", Cost: " << cost << endl;
				break;
			}
			depthFirstSearch(graph, loc, end);
			graph.path.pop_back();
			graph.isTraversed[loc] = 0;
			
		}
	}

	int findCity(string city) {

	
			if (city == "Arad") {
				
				return 0;
			}
			else if (city == "Zerind") {
				
				return 1;
			}
			else if (city == "Oradea") {
				
				return 2;
			}
			else if (city == "Timisoara") {
				
				return 3;
			}
			else if (city == "Lugoj") {
				
				return 4;
			}
			else if (city == "Mehadia") {
			;
				return 5;
			}
			else if (city == "Drobeta") {
				
				return 6;
			}
			else if (city == "Sibiu") {
				
				return 7;
			}
			else if (city == "Rimnicu-Vilcea") {
				
				return 8;
			}
			else if (city == "Craiova") {
				
				return 9;
			}
			else if (city == "Fagaras") {
				
				return 10;
			}
			else if (city == "Pitesti") {
				
				return 11;
			}
			else if (city == "Bucuresti") {
				
				return 12;
			}
			else if (city == "Giurgiu") {
				
				return 13;
			}
			else if (city == "Urziceni") {
				
				return 14;
			}
			else if (city == "Hirsova") {
				
				return 15;
			}
			else if (city == "Eforie") {
				
				return 16;
			}
			else if (city == "Vaslui") {
				
				return 17;
			}
			else if (city == "Iasi") {
			
				return 18;
			}
			else if (city == "Neamt") {
				;
				return 19;
			}
			else
				cout << "Sorry, we can't compute the shortest path of this city. Make sure you introduced the correct name! ";
			return -1;
		
	}
	
};
int main(int argc, char* argv[]) {

	int index = 0;
	int start, end;
	string friend1, friend2;
	string cities[19];
	int k = 1;

	AdjacencyMatrix graph;
	Solution sol;
	sol.createGraph(graph);

	
	cout << " Where is the first friend located? " << endl;
	cin >> friend1;
	start = sol.findCity(friend1);


	cout << " Where does the second friend live? " << endl;
	cin >> friend2;
	end = sol.findCity(friend2);


	sol.depthFirstSearch(graph, start, end);

	index = sol.minimumPathCost(graph.pathcost);
	cout << endl << "The shortest path is: ";
	for (int now = 0; now < graph.pathcost[index].first.size(); now++) {
		cout << graph.vertex[graph.pathcost[index].first[now]] << " -> ";
		cities[now] = graph.vertex[graph.pathcost[index].first[now]] ;
		if ((now + 1) == graph.pathcost[index].first.size()) {
			cout << graph.vertex[end] << endl;
			cities[now+1] = graph.vertex[end];
		}
	}
	cout << endl;
	cout << endl;
	for (int now = 1; now < graph.pathcost[index].first.size(); now++) {
		cout << "Friend #1 goes to " << cities[now] << endl;
		cout << "Friend #2 goes to " << cities[graph.pathcost[index].first.size()-k] << endl;
		if (cities[now] == cities[(graph.pathcost[index].first.size()-k)])
		break;
	

		if (cities[now] == cities[(graph.pathcost[index].first.size() - k - 1)]) {
			cout << "Friend #1 goes to " << cities[now+1] << endl;
			break;
		}
		k++;
	}

	vector<int>().swap(graph.path);
	system("pause");
	return 0;
}