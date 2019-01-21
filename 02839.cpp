#include <iostream>
using namespace std;
int main()
{    int N, count=0;
    cout<<"Amount of sugar(kilogram)?: ";
    cin>>N;
    
    while(1) {
        if(N%5 == 0){
            cout<<N/5+count<<endl;
            break;
        }
        else if(N <= 0){
            cout<<-1<<endl;
            break;
        }
        N = N-3;
        count++;  
    }
    
    return 0;
}
