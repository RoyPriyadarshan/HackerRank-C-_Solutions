#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,q;
    int marks;
    map<string,int>m;
    n=0;
    std::cin>>n;
    for (i=0 ; i<n ; i++){
        q=0;
        std::cin>>q;
        string name;
        marks=0;
        if (q==1){
            marks = 0;
            std::cin>>name;
            std::cin>>marks;
            m[name]+=marks;            
        }
        else if(q==2){
            std::cin>>name;
            m.erase(name);
        }
        else{
            std::cin>>name;
            map<string,int>::iterator itr = m.find(name);
            if (itr != m.end())
            std::cout<<m[name]<<endl;
            else
            std::cout<<0<<endl;
        }
    }

    return 0;
}




