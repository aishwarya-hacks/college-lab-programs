#include<iostream>
#include<chrono>
using namespace std;
long long factorialIterative(int n)
{
long long res=1;
for(int i=2;i<=n;i++)
res*=i;
return res;
}
int main(){
    int n=3;
auto t1=chrono::high_resolution_clock::now();
long long res=factorialIterative(n);
auto t2=chrono::high_resolution_clock::now();
chrono::duration<double, milli>elapsed=t2-t1;
cout<<"factorial("<<n<<")="<<res<<"\n";
cout<<"execution time:"<<elapsed.count()<<"ms\n";
return 0;
}
