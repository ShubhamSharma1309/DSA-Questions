#include<iostream>
using namespace std;

int Recursion(int capacity, int wt[], int profit[], int index, int n){
    if(index >= n){
        return 0;
    }
    int include = 0;
    if(wt[index] <= capacity){
        include = profit[index] + Recursion(capacity-wt[index], wt,profit,index+1,n);
    }
    int exclude = 0 + Recursion(capacity,wt,profit,index+1,n);

    int ans = max(include,exclude);
    return ans;
}

int main(){
    int capacity = 50;
    int wt[] = {10,20,30};
    int profit[] = {60,100,120};
    int index = 0;
    int n = 3;

    int ans = Recursion(capacity,wt,profit,index,n);
    cout<<ans<<" ";
    return 0;
}