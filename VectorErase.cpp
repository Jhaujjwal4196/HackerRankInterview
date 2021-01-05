#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    int k;
    cin>>k;
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+k-1);
    auto it= v.begin()+a-1;
    v.erase(it,it+(b-a));
    
    cout<<v.size()<<endl;
    for(int x: v)
    cout<<x<<" ";
    return 0;
}
