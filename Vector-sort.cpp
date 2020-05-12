#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,value,i;
    std::cin>>n;
    vector <int> enter;

    for (i=0 ; i<n ; i++){
        std::cin>>value;
        enter.push_back(value);
    }
    sort(enter.begin(),enter.end());
    for (i=0 ; i<n ; i++){
        std::cout<<enter[i]<<" ";
    }

    return 0;
}

