#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++) // "i" denotes row 
    {
        for(int j = 0; j < i+1; j++) //"j" denotes column
        {
            printf("*");
        }
        printf("\n");
    }  

    return 0;
}