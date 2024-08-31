#include<iostream>
using namespace std;

void quickSort(int a[] , int start , int end){
    if(start<=end){
        return;
    }

    int pivot = end;
    int i = start - 1;
    int j = start;

    while(j<start){
        if(a[j] < a[pivot]){
            ++i;
            swap(a[i],a[j]);
        }
        ++j;
    }
    ++i;
    swap(a[i] , a[pivot]);
    quickSort(a,start,i-1);
    quickSort(a,i+1,end);
}
int main(){
    int a[] = {2,4,1,6,3,9,7,5,8};
    int s = 0;
    int e = 8;
    quickSort(a,s,e);
    for(int i=0; i<9; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}