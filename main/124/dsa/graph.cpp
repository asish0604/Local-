# include <iostream>
# include "stack.h"
using namespace std;
int m,n;
int stack=[100];
int visited=[100];
int adj=[100][100];
void defs(int start)
{
int top=-1;
stack[++top]=start;
while(top!=-1){
    if(!visited[node]){
	visited[node]=true;
	cout<<node<<"\t";
	for(int i=0; i<n; i++){
	     if(adj[node][i] &&  !visited[i]){
		stack[++top];
		}
	}
     }
		}
}
void readGraph(){
cout<<"enter no of vertices and edges"<<endl;
cin>>n>>m;
for(int i=0; i<n; i++)
	for(int i=0; i<n; i++)
		adj[i][j]=0;
cout<<"please enter the edges"<<endl;
for(int i=0; i<m; i++){
	int u,v;
	cin>>u>>v;
	adj[u][v]=1;
	adj[v][u]=1;
}
}
int main(){
  readGraphs();
  for(int i=0; i<n; i++){
  visited[i]=false;
  dfs(0);

  return 0;
 }

