#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Edge{
int u,v,w;
};
struct DSU{
vector<int>parent;
DSU(int n){
parent.resize(n);
for(int i=0;i<n;i++)
parent[i]=i;
}
int find(int i){
if(parent[i]==i)
return i;
return parent[i]=find(parent[i]);
}
bool unite(int i,int j){
int root_i=find(i);
int root_j=find(j);
if(root_i != root_j){
parent[root_i]=root_j;
return true;
}
return false;
}
};
int main(){
int v=5;
vector<Edge>edges={{0,1,2},{0,3,6},{1,2,3},{1,4,5},{2,4,7},{3,4,9}};
sort(edges.begin(),edges.end(),[](Edge a,Edge b){
return a.w<b.w;
});
DSU dsu(v);
int totalWeight=0;
cout<<"MST edges:\n";
for(auto & e:edges){
if(dsu.unite(e.u,e.v)){
cout<<e.u<<"-"<<e.v<<":"<<e.w<<endl;
 totalWeight += e.w;
}
}

cout<<"total minimum cose:"<<totalWeight<<endl;
return 0;
}
