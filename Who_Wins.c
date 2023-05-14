#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int x1, x2;
    int tigar = 0, pathan = 0;
    for (int i = 0; i < n;i++){
        scanf("%d %d", &x1, &x2);
        if(x1==x2){
            tigar = tigar+1;
            pathan = pathan+1;
        }
        else if(x1>x2){
            tigar = tigar+1;
        }else{
            pathan = pathan+1;
        }
    }
    if(tigar>pathan){
        printf("Tiger");
    }else if(tigar<pathan){
        printf("Pathan");
    }else{
        printf("Draw");
    }
        return 0;
}
