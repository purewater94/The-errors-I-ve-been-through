#include <stdio.h>

int main(void){
    int x, y;
    
    scanf("%d-%d", &x, &y);
    printf("%06d%07d", x, y);
    
    return 0;
}
