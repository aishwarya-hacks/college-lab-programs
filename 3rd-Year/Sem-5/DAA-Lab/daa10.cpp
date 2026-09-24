#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int matrixChainOrder(const vector<int>&p){
int n=p.size()-1;
vector<vector<int>>m(n+1,vector<int>(n+1,0));
for(int L=2;L<=n;L++)
{
for(int i=1;i<n-L+1;i++)
{
int j=i+L-1;
m[i][j]=INT_MAX;
for(int k=i;k<j;k++)
{
int q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
if(q<m[i][j])
m[i][j]=q;
}
}
}
return m[1][n];
}
int main(){
vector<int>arr={10,20,30,40,30};
cout<<"minimum multiplications:"<<matrixChainOrder(arr)<<endl;
return 0;
}
