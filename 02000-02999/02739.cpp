#include <stdio.h>

int main(void) {
    int N; 
    int result;
    scanf("%d", &N);
    
    for(int i=1; i<=9; i++) {
        result = N*i;
        printf("%d * %d = %d\n", N, i, result);
    }
    return 0;
}
