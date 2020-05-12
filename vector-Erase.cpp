#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,value,pos,a,b;  
    vector<int>ar;
    std::cin>>n;
    for (i=0 ; i<n ; i++){
        std::cin>>value;
        ar.push_back(value);
    } 
    int x;
    std::cin>>x;

    ar.erase(ar.begin()+x-1); 
    
    cin>>a>>b;
    
    ar.erase(ar.begin()+a-1,ar.begin()+b-1);
    
    int t = ar.size();
    cout<<t<<endl;
    
    for (i=0 ; i<t ; i++){
        std::cout<<ar[i]<<" ";
    } 
    return 0;
}

