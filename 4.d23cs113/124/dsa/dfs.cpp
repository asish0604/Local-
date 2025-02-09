#include<iostream>
# define MAX 100
using namespace std;
bool visited[MAX];
int adj[MAX][MAX];
int stack [MAX];
int m,n;
void DFS(int start)
{
	int top=-1;
	stack[++top]=start;
	while(top!=-1)
	{   int node=stack[top--];
	    if(!visited[node]){
		visited[node]=true;
		cout<<node<<"\t";
		for(int i=n-1; i>=0; i--){
		     if(adj[node][i] &&  !visited[i])
			{
				stack[++top]=i;
			}
		}
	     }
	}		
}
void readGraph()
{
	cout<<"enter no of vertices and edges"<<endl;
	cin>>n>>m;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			adj[i][j]=0;
	cout<<"please enter the edges"<<endl;
	for(int i=0; i<m; i++){
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
}
int main()
{
	readGraph();
	for(int i=0; i<n; i++)
	{
	visited[i]=false;
	}
 	DFS(0);
	

  return 0;
}

