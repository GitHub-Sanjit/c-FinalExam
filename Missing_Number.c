#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    int s, a, b, c,res;
    for (int i = 0; i < t;i++){
        scanf("%d %d %d %d", &s, &a, &b, &c);
        res = s - (a + b + c);
        printf("%d\n", res);
    }
    return 0;
}
