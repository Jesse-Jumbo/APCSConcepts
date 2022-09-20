#include<stdio.h>
#include<stdbool.h>

void main(){
    bool x1 = false;
    bool x2 = false;
    bool x3 = false;
    bool res = !x1 && !x2 && !x3;
    if (res){
        printf("res is Ture");
    }
}