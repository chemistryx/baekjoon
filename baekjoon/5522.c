#include <stdio.h>

int main() {
    
    int sum = 0;
    
    for (int i = 0; i < 5; i ++) {
        int n;
        scanf("%d", &n);
        sum += n;
    }
    
    printf("%d", sum);

    return 0;
}
