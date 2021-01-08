#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
int RevNumber(int x){
    int res=0;
    while(x!=0){
        if(res>(pow(2,31)-1)) return 0;
        if(res<-(pow(2,31)-1)) return 0;
        res*=10;
        res+=x%10;
        x/=10;

    }
    return res;
}
};
main(){
    Solution s1;
    int n;
    cin>>n;

   cout<<"Reversed one is\t"<< s1.RevNumber(n)<<endl;
}