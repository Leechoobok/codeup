#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld\n", (long long int)a+b+c);
    printf("%.1f\n", (float)((long long int)a+b+c)/3);
    return 0;
}
