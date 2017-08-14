#include <stdio.h>

int main(void)
{
    int x = 3;
    int *p = &x;
    printf("p = %p\n", p);
    printf("&x = %p\n", &x);

    *p = 45;
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 5;
    }

    int *z = &arr[5];
    printf("*z = %d\n", *z);
}
