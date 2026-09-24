#include<iostream>
#include<vector>
#include<chrono>
#include<cstdlib>
using namespace std;
void selectionSort(vector<int>&arr)
{
int n=arr.size();
for(int i=0;i<n-1;i++)
{
int min_idx=i;
for(int j=i+1;j<n;j++)
{
if(arr[j]<arr[min_idx])min_idx=j;
}
swap(arr[i],arr[min_idx]);
}
}
int main()
{
vector<int>arr(500);
for(int i=0;i<500;i++)
arr[i]=rand()%1000+1;
auto start=chrono::high_resolution_clock::now();
selectionSort(arr);
auto end=chrono::high_resolution_clock::now();
chrono::duration<double,milli>elapsed=end-start;
cout<<"sorted array(first 10):";
for(int i=0;i<10;i++)
cout<<arr[i]<<" ";
cout<<"\n Execution Time:"<<elapsed.count()<<"ms\n";
return 0;
}
