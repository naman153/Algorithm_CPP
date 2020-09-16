#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    cin.ignore();
    string name;
    long number;
    map<string,long> dict;
    for(int i=0;i<n;i++){
        cin>>name>>number;
        dict[name]=number;
    } 
    while(cin>>name){
        if(dict.find(name)!=dict.end()){
           cout<<name<<"="<<dict.find(name)->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
