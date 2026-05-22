#include <stdio.h>
int main(){
    int i, tam=0;
    char vet[101];
    //ASCII é uma tabela que associa um caracter a um número

    fgets(vet, 101, stdin); //onde guarda, quanto e entrada padrão 

    for(i=0;vet[i] != '\0'; i++){
        tam++;
        if(vet[i] == '\n'){
            tam--;
        }
    }

    for(i = tam-1; i >= 0; i--){
        printf("%c - %d\n", vet[i], vet[i]);
    }


    return 0;
}