#include <stdio.h>
int main(){
    int i;
    char vet[1001];
    
    scanf("%s", vet);

    for(i=0;vet[i] != '\0'; i++){}


    printf("%d", i);

    return 0;
}