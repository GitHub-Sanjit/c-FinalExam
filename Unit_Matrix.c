#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int row,col;

    scanf("%d",&row);
    col = row;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1; 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                if(a[i][j] != 1)
                {
                    flag=0;
                    break;
                }
            }
            else if(a[i][j]!=0){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}