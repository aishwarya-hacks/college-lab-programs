#include<iostream>
#include<vector>
#include<chrono>
#include<cstdlib>
using namespace std;
void insertionSort(vector<int>&arr){
int n=arr.size();
for(int i=1;i<n;i++){
int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
}
int main(){
vector<int>arr(500);
for(int i=0;i<500;i++)
arr[i]=rand()%1000+1;
auto start=chrono::high_resolution_clock::now();
insertionSort(arr);
auto end=chrono::high_resolution_clock::now();
chrono::duration<double, milli>elapsed=end-start;
cout<<"sorted arrray(first 10):\n";
for(int i=0;i<10;i++)
cout<<arr[i]<<" ";
cout<<"\nExecution Time:"<<elapsed.count()<<"ms\n";
return 0;
}

