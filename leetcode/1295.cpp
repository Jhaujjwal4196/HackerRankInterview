class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(count(nums[i])%2==0)
                c++;
        }
        return c;
    }
    int count(int n){
        int ct=0;
        while(n>0){
            ct++;
            n/=10;
        } return ct;
    }
};