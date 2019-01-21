#include <iostream>
using namespace std;
int main()
{    int T;
    
    cout<<"Enter T: ";
    cin>>T;
    
    for(int i=0; i<T; i++){
        int room;
        int pre_n;
        int step=0;
        int H, W, N;
        cout<<"ENTER H, W, N: ";
        cin>>H>>W>>N;
        
        for(int i=1; i<=W; i++){
            pre_n = N;
            N = N-H;
            if(N <0){
                step = i;
                break;
            }
        }
        room = 100*pre_n + step;
    
        cout<<step<<endl;
        cout<<pre_n<<endl;
        cout<<room<<endl;
        
    }
    
    return 0;
}
