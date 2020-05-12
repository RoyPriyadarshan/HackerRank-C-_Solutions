#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i,j,k,input;
    std::vector  <vector<int>> ar (k+q);     
    std::cin>>n;
    std::cin>>q;
    
    for (i=0 ; i<n ; i++){
        std::cin>>k;
        ar[i].push_back(i);
        for (j=0 ; j<k ;j++){
            std::cin>>input;
            ar[i].push_back(input);
        }        
    }
    
    int a,b;
    for (int l=0 ; l<q ; l++)
    {
        std::cin>>a>>b;
        std::cout<<ar[a][b+1]<<endl;
    }
        
return 0;
}


