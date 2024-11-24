#include<iostream>
#include "stack.h"
using namespace std;

int adj[100][100];
bool visited [100];
int stack[100];
int n,m;

void DFS(int start){
	int top= -1;

	stack[++top]=start;
	while(top != -1){
		int node=stack[top--];
		if(!visited[node]){
			visited[node]=true;
			cout<<node<<"\t";
			for (int i=n; i>=0; i--){
				if(adj[node][i]&& !visited[i])
				{
					stack[++top]=i;}
			}
		}
	}
}
void readGraph(){
	cout<<"Enter no. of vertices and edges \n";
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			adj[i][j]=0;
		}
	}
	cout<<"Enter Edges(u,v)\n";
	for(int i=0; i<m; i++){
		int u, v;
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}
}
int main(){
	readgraph();
	for(int i=0; i<n; i++){
		visited[i]=false;
	} DFS(o)0;
	return 0;
}

