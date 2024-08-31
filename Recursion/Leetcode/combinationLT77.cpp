#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>& candidates, int target, vector<int>&v, vector<vector<int>>&ans, int index){
    if(target == 0) {
        ans.push_back(v);
        return;
    }
    if(target<0) return;

    for(int i=index; i<candidates.size(); i++){
        if(i>index && candidates[i] == candidates[i-1]){
                continue;
            }
        v.push_back(candidates[i]);
        solve(candidates,target-candidates[i],v,ans,i+1);
        v.pop_back();
    }
}

int main(){

vector<int> candidates = {1,1,2,5,6,7,10};

int target = 8;
vector<vector<int>>ans;
vector<int>v;
solve(candidates,target,v,ans,0);
for(auto i : ans){
    for(auto s : i){
        cout<<s;
    }
    cout<<endl;
}
return 0;
}
