#include <stdio.h>
int main(){
  int tam, i, menor=0, j, mn2, mn3;
  
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

  mn2 = vet[0];
  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      if(mn2 > menor && mn2 <= vet[j]){
        mn2 = vet[j];
        printf("%d ", mn2);
      }
    }
  }

  mn3 = vet[0];
  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      if(mn3 > mn2 && mn3 <= vet[j]){
        mn3 = vet[j];
      }
    }
  }
  
  printf("\n%d - %d", mn2, mn3);
  
  return 0;
}