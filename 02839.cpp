#include <iostream>
using namespace std;

int main(void) {
    int N;
    int count3=0;
    
    cin>>N;
    
    if(N%5 == 0)
        cout<<N/5<<endl;
    else {
        while(N >= 0){
            count3++;
            N = N-3;
            if(N%5 == 0){
                cout<<count3 + (N/5)<<endl;
                return 0;
            }
        }
        if(N==0)
            cout<<count3++<<endl;
        else if(N<0)
            cout<<-1<<endl;
    }
            
    
    return 0;
}
