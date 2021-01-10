#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string s1,s2;
    cin>>n;
    //cin>>s1>>s2;
    for(int i=0;i<n;i++){
        cin>>s1;
        for(int j=0;j<s1.length();j++){
            if(j%2==0)
            cout<<s1[j];
        }
        cout<<" ";
        for(int k=0;k<s1.length();k++){
            if(k%2!=0)
            cout<<s1[k];
        }
        cout<<"\n";
    }
    
    return 0;
}
