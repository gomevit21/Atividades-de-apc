#include <stdio.h>
int main(){
    int tam, i, menor=0, j;
  
  scanf("%d", &tam);
  int  vet[tam];

  for(i=0;i<tam;i++){
    scanf("%d", &vet[i]);
  }
  
  menor = vet[i];
  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      if(menor > vet[j]){
        menor = vet[j];
      }
    }
  }

  printf("%d", menor);

  return 0;
}