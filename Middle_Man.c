#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n;j++){
            if(ar[i]>ar[j]){
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            }
        }
    }
    if(n%2!=0){
        int result = ar[(n) / 2];
        printf("%d", result);
    }else{
        printf("%d %d", ar[(n / 2)-1], ar[(n/2)]);
    }
        return 0;
}
