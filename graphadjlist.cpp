#include <queue>
#include <iostream>
#include<vector>
using namespace std;
int ct=0;
class Graph
{
    int nodes,e;
    vector<int> v[10];

    public :
    Graph(int g)
    {
        nodes=g;
        for(int i=0;i<v->size();i++)
        {
            v[i].clear();
           
        }
    }
    void addEdge(int u,int s)
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
                if(vi[x]==false)
                {
                    vi[x]=true;
                    q.push(x);

                }
            }
            
        }
    }
    void BFS(int i,vector<bool>& visited)
    {
        
        queue<int> q;
        q.push(i);
        visited[i]=true;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            cout<<u;

            for(int vii : v[u])
            {
                if(visited[vii]==false)
                {
                    visited[vii]=true;
                    q.push(vii);
                }
            }
        }
    }
    
    void bfsdis(int d)
    {
        vector<bool> visited(d , false);
        for (int i = 0; i < d; i++)
        {
            if (visited[i] == false)
            {
                ct++;
                BFS(i, visited);
            }
        }
    }
    
    
    void display()
    {
        for (int i = 0; i < nodes; i++)
        {
            cout<<"list of adjancy list of"<<i<<"  ";
            for (int j = 0; j <v->size(); j++)
            {
                cout<<v[i][j]<<"   ";
            }
            cout<<endl;
            
        }
        
        
    }

};
int main()
{
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,3);
    g.addEdge(3,2);
    g.addEdge(0,2);
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.addEdge(4,6);
    g.bfsdis(7);
    cout<<endl<<ct;    

    
    return 0;
}
