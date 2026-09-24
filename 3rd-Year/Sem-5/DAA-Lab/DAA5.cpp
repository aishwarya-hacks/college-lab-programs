#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
int partition(vector<int>&arr,int low,int high)
{
int pivot=arr[high];
int i=(low-1);
for(int j=low;j<high-1;j++)
{
if(arr[j]<pivot)
{
i++;
swap(arr[i],arr[j]);
}
}

swap(arr[i+1],arr[high]);
return(i+1);
}


void quickSort(vector<int>&arr,int low, int high)
{
if(low<high)
{
int pi=partition(arr,low,high);
quickSort(arr,low,pi-1);
quickSort(arr,pi+1,high);
}
}
int main()
{
vector<int>arr(500);
for(int i=0;i<500;i++)
arr[i]=rand()%1000+1;
auto start=chrono::high_resolution_clock::now();
quickSort(arr,0,arr.size()-1);
auto end=chrono::high_resolution_clock::now();
chrono::duration<double,milli>elapsed=end-start;
cout<<"sorted array(first 10):";
for(int i=0;i<10;i++)
cout<<arr[i]<<" ";
cout<<"\n Execution Time:"<<elapsed.count()<<"ms\n";
return 0;
}
