#include<iostream>
#include<vector>
using namespace std;
bool issafe(const vector<vector<int>>& board,int row,int col,int N)
{
for(int i=0;i<row;i++)
if(board[i][col])
return false;
for(int i=row,j=col;i>=0 && j>=0; i--,j--)
if(board[i][j])
return false;
for(int i=row,j=col;i>=0 && j>=N;i--,j--)
if(board[i][j])
return false;
return true;
}
bool solveNQueens(vector<vector<int>>&board,int row,int N)
{
if(row>=N)
return true;
for(int col=0;col<N;col++)
{
if(issafe(board,row,col,N))
{
board[row][col]=1;
if(solveNQueens(board,row+1,N))
return true;
board[row][col]=0;
}
}
return false;
}
int main(){
int N=4;
vector<vector<int>>board(N,vector<int>(N,0));
    if(solveNQueens(board,0,N))
    {
    cout<<"Solution for"<<N<<"-Queens problem:\n";
    for(int i=0;i<N;i++)
    {
    for(int j=0;j<N;j++){
    cout<<(board[i][j]?" Q ":" . ");
    }
    cout<<endl;
    }
    }
    else
    {
    cout<<"No solution exists.\n";
    }
return 0;
}
