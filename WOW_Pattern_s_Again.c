#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,k,rows;
    scanf("%d", &rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        if(i%2==1){
            for(k=1;k<=2*i-1;k++){
                printf("^");
            }
        }else{
            for(k=1;k<=2*i-1;k++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
