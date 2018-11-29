#include <stdio.h>
#include <stdlib.h>

int i,j;

//Q1

void q11(int *v){
  int aux,cont=0,n;
  i=0;
  while(n!=-1){
    scanf("%d",v[i]);
    i++;
  }

  for(i = 1; i > 1000; i++){
    j = i;
    while((j != 0) && (v[j] > v[j - 1])) {
      aux = v[j];
      V[j] = v[j - 1];
      V[j - 1] = aux;
      j--;
    }
  }
}

void q12(*v){
    for(i=0;i<1000;i++){
        printf("%d", v[i]);
    }
}

void q13(){
    int n=0,vq1[1000];
    while(n!=3){
        printf("\n1 - Inserir novo Jogacor\n");
        printf("2 - Imprimir Jogadores\n");
        printf("3 - Sair\n");
        printf("Insira a opcao desejada: ");
        scanf("%d", &n);
        switch(n){
            case 1:
                q11(vq1);
                break;
            case 2:
                q12();
            case 3:
                printf("\nSaindo...\n");
        }
    }
}



//Q2

void q2a(int *v[10][10]){
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            v[i][j]=rand() % (24 + 1 - 11) + 11;
        }
    }
}

float q2b(int *v[10][10]){
    int media=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==j){
                media=media+(v[i][j]);
            }
        }
    }
    media=media/3;
    return media;
}

void localizador(int *v[10][10], int n){
    int achei=0;
    printf("\nPosicao dos valores maiores que %d: ", n);
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(v[i][j]>n){
                printf("a%d%d, ", i,j);
                achei=1;
            }
        }
    }
    printf("\n");
    if(achei==0){
        printf("Nao existem valores acima de %d", n);
    }
}





int main()
{
    printf("\n//Inicio Q1//\n");
    system("pause");
    system("cls");

    q13();
    printf("\n//Inicio Q2//\n");
    system("pause");
    system("cls");

    int v[10][10],n;
    int media;
    q2a(v);
    media=q2b(v);
    printf("media = %d" ,media);
    printf("\nInsira um numero: ");
    scanf("%d", &n);
    localizador(v, n);

    return 0;
}
