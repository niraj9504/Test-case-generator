#include<bits/stdc++.h>
using namespace std;
//Test case generator for Tree using Disjoint-Set Union
//Since this is a tree,  the test data generation plan is such that no cycle gets formed.
//The number of edges is one less than the number of vertices

int findPar(int node,vector<int> &parent){
     if(node==parent[node])return node;
     return parent[node]=findPar(parent[node],parent);
}

void unionn(int x,int y,vector<int> &parent,vector<int> &rank){
     int u=findPar(x,parent);
     int v=findPar(y,parent);
     if(rank[u]<rank[v]){
          parent[u]=v;
     }
     else if(rank[u]>rank[v]){
          parent[v]=u;
     }
     else{
          parent[v]=u;
          rank[u]++;
     }
}

int main(){
     srand(time(NULL));
     int t=1+rand()%5;
     cout<<t<<endl;
     while(t--){
          // for 2<=Number of Nodes<=MAXNODE
          int n=rand()%5 +2; //no.of nodes 
          cout<<n<<endl;
          vector<int> parent(n+1),rank(n+1,0);
          for(int i=1;i<=n;i++){
               parent[i]=i;
               rank[i]=0;
          }
          vector<pair<int,int>> edges;
          vector<int> wt;
          
          //n-1 edges
          for(int i=1;i<=n-1;i++){
               int u=rand()%n + 1;
               int v=rand()%n + 1;
               
               // finding edges till it not forms cycle
               while(findPar(u,parent)==findPar(v,parent)){
                    u=rand()%n + 1;
                    v=rand()%n + 1;
               }
               //take union of the nodes
               unionn(u,v,parent,rank);
               //storing current edges and wt;
               edges.push_back({u,v});
               int w=rand()%5+1; //wt generation
               wt.push_back(w);
          }
          //printing edges and wt
          for(int i=0;i<edges.size();i++){
               cout<<edges[i].first<<" "<<edges[i].second<<" ";
               cout<<wt[i]<<"\n";
          }
     }
     return 0;
}