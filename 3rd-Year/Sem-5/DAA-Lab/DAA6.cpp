#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
int linearSearch(const vector<int>&arr,int target)
{
for(int i=0;i<arr.size();i++)
{
if(arr[i]==target)
return i;
}
return -1;
}
int binarySearch(const vector<int>&arr,int target)
{
int low=0,high=arr.size()-1;
while(low<=high)
{
int mid=low+(high-low)/2;
if(arr[mid]==target)
return mid;
if(arr[mid]<target)
low=mid+1;
else
high=mid-1;
}
return -1;
}
int main(){
vector<int>data(1000000);
for(int i=0;i<100000;i++)
data[i]=i+1;
int target=999990;
auto t1=chrono::high_resolution_clock::now();
int r1=linearSearch(data,target);
auto t2=chrono::high_resolution_clock::now();
auto t3=chrono::high_resolution_clock::now();
int r2=binarySearch(data,target);
auto t4=chrono::high_resolution_clock::now();
cout<<"Linear Search Index:"<<r1<<"|Time:"<<chrono::duration<double,milli>(t2-t1).count()<<"ms\n";
cout<<"Binary Search Index:"<<r2<<"|Time:"<<chrono::duration<double,milli>(t4-t3).count()<<"ms\n";
return 0;
}
