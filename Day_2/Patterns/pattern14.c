#include <stdio.h>

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}