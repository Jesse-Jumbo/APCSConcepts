#include<stdio.h>

int a = 7, b = 3;

void test(){
    printf("int result: %d\n", 7/3);
    printf("float result: %f, %f\n", 7.0/3, 7/3.0);
}

void main(){
    float w =  a / 2 / b * 1.0;
    float x = a / b / 2.0;
    float y = a / 2 / b;
    float z = 1.0 * a / 2 / b;
    float c = a/2;
    printf("w: %f, x: %f, y: %f, z: %f \n", w, x, y, z);
# if 0
    test();
#endif
}