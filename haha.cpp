#include <stdio.h>
int main() {
    printf("hello world");
    int sum = 0;
    for (int i = 0; i < 10; ++i){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
