#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
          int l=0;
        int h= height.size()-1;
        int maxA=0;
        while(l<h){
            int h1= height[l];
            int h2= height[h];
            int min_h= min(h1,h2);
            int len= h-l;
            int are= min_h*len;
            maxA= max(maxA,are);
            if (h1<h2)  l++;
            else h--;
        }
        return maxA;
        
    }
};
main(){
    vector <int> v {1,2,1};
   Solution s1;
   int j=s1.maxArea(v);
   cout<<j<<endl;

}