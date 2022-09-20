#include<stdio.h>

void main() {
    int b = 10, i;
    float a = 47;
    for (i = 0; i < 10; i++) {
        b = a / b;
        if (i%2==0){
            printf("0");
        }
        else {
            printf("1");
        }
        printf(": %d\n", b);
    }
}
