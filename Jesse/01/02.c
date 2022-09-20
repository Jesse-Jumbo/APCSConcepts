#include<stdio.h>

#if 1
int a = 30;
void b() {
    int a = 20;
}
int main() {
    a = 10;
    b();
    printf("%d ", a);
}
#endif
#if 0
int a = 30;
void b() {
    a = 20;
}
int main() {
    a = 10;
    b();
    printf ("%d ", a);
}
#endif
#if 0
int a = 30;
void b() {
    a = 20;
}
int main() {
    int a = 10;
    b();
    printf ("%d ", a);
}
#endif
#if 0
int a = 30;
void b() {
    printf("%d\n", a);
}
int main() {
    int a = 10;
    b();
    printf ("%d ", a);
}
#endif