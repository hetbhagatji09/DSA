#include<stack>
#include <queue>
#include <iostream>
using namespace std;
const int MAX_NODES = 100; // Define the maximum number of nodes

class Graph {
private:
    int numNodes;
    int adjMatrix[MAX_NODES][MAX_NODES];

public:
    // Constructor
    Graph(int n) {
        numNodes = n;
        for (int i = 0; i < numNodes; i++) {
            for (int j = 0; j < numNodes; j++) {
                adjMatrix[i][j] = 0; // Initialize the adjacency matrix
            }
        }
    }

    // Function to add an edge between two nodes
    void addEdge(int u, int v) {
        if (u >= 0 && u < numNodes && v >= 0 && v < numNodes) {
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1; // Since it's an undirected graph
        }
    }

    // Function to display the adjacency matrix
    void display() {
        for (int i = 0; i < numNodes; i++) 
        {
            for (int j = 0; j < numNodes; j++) {
                std::cout << adjMatrix[i][j] << " ";
            }
            cout << std::endl;
        }
    }

    void bfs(int startNode,int nodes) {
        bool visited[nodes] = {false};
        queue<int> q;

        visited[startNode] = true;
        q.push(startNode);

        while (!q.empty()) {
            int currentNode = q.front();
            std::cout<< currentNode << std::endl;
            q.pop();

            for (int neighbor = 0; neighbor < numNodes; neighbor++) 
            {
                if (adjMatrix[currentNode][neighbor] == 1 && !visited[neighbor]) 
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
     void dfs(int startNode) {
        bool visited[MAX_NODES] = {false};
        stack <int> Stack;
        Stack.push(startNode);

        visited[startNode] = true;

        while (!Stack.empty()) {
            int currentNode = Stack.top();
            Stack.pop();
            std::cout << "Visited Node: " << currentNode << std::endl;

            for (int neighbor = 0; neighbor < numNodes; neighbor++) {
                if (adjMatrix[currentNode][neighbor] == 1 && !visited[neighbor]) {
                    visited[neighbor] = true;
                    Stack.push(neighbor);
                }
            }
        }
    }
};

int main() {
    int numNodes = 5; // Change this to the desired number of nodes
    Graph graph(numNodes);

    // Adding edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    // Display the adjacency matrix
    // graph.display();

    
    
    graph.dfs(0);

    return 0;
}
