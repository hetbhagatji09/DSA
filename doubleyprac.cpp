#include <queue>
#include <iostream>
#include <vector>
using namespace std;

class Graph
{
    int nodes, e;
    vector<int> v[5];

public:
    Graph(int g)
    {
        nodes = g;
        for(int i = 0; i < nodes; i++)
        {
            v[i].clear();
        }
    }

    void addEdge(int u, int s)
    {
        v[u].push_back(s);
        v[s].push_back(u);
    }

    void bfs(int s)
    {
        vector<bool> vi(nodes, false);
        queue<int> q;
        q.push(s);
        vi[s] = true;

        while (!q.empty())
        {
            int current = q.front();
            cout << current << "  ";
            q.pop();

            for (int x : v[current])
            {
                if (vi[x] == false)
                {
                    vi[x] = true;
                    q.push(x);
                }
            }

        }
    }

    void BFS(int i, vector<bool>& visite)
    {
        visite[i] = true;
    }

    void bfsdis(int d)
    {
        vector<bool> visited(d + 1, false);
        for (int i = 0; i < d; i++)
        {
            if (visited[i] == false)
            {
                BFS(i, visited);
            }
        }
    }

    void display()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout << "list of adjacency list of " << i << "  ";
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j] << "   ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(4);

    return 0;
}
