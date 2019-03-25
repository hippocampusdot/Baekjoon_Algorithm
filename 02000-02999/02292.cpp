#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    int n;
    int count=0;
    
    cin>>n;
    
    while(n>0){
        if(count==0){
            n -= 1;
            count++;
            continue;
        }
        n -= 6*count;
        count++;
    }
    cout<<count<<endl;
    
    return 0;
    
}
