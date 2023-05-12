#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    fgets(s,1001,stdin);
    int i = 0;
    int capital=0, small=0, space=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            space++;
        }else{
            if(s[i]>='a' && s[i]<='z'){
                small++;
            }else{
                capital++;
            }
        }
        i++;
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);

    return 0;
}