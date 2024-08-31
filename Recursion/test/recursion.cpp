#include<iostream>
using namespace std;

void findsubSeq(string str, string output, int index){
    if(index>=str.length()){
        cout<<"->"<<output<<endl;
        return;
    }
    char ch = str[index];
    //exclude 
    findsubSeq(str,output,index+1);

    //include
    output.push_back(ch);
    findsubSeq(str,output,index+1);
}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    findsubSeq(str,output,index);
    return 0;
}