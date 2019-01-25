#include <stdio.h>
using namespace std;

int main(void) {
    int MAX = 100000;
    int N;
    scanf("%d", &N);
    if(N > MAX)  
        return 0;
    
    for(int i=1; i<=N; i++) 
        printf("%d\n", i);
    
    return 0;
}
