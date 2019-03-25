#include <iostream>
using namespace std;

int get_number(int k, int n){
    if(k==0)
        return n;
    else if(n==1)
        return 1;
    return get_number(k, n-1)+get_number(k-1, n);
}

int main(void) {
    ios::sync_with_stdio(false);
    int T;
    int k, n;
    
    cin>>T;
    //T번 실험
    for(int i=0; i<T; i++){
        int result;
        cin>>k;
        cin>>n;
        
        result = get_number(k,n);
        
        cout<<result<<endl;
        
    }
    return 0;
}
