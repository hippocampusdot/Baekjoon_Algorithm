#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    int T;
    int begin, end;
    
    cin>>T;
    //T번 실험
    for(int i=0; i<T; i++){
        int step=0, pre=0;
        int count=0;
        int between=0;
        cin>>begin>>end;
        
        between = end-begin;
        
        while(between>0){
            step++;
            pre = between;
            between -= 2*step;
        }
        
        // cout<<"step: "<<step<<endl;
        // cout<<"pre: "<<pre<<endl;
        
        if(pre<=step)
            count = 2*step-1;
        else
            count = 2*step;
        
        cout<<count<<endl;
    }
    return 0;
}
