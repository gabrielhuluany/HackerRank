#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("%d", sum);
    return 0;
}
