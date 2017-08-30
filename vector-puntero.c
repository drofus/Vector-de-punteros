#include <stdio.h>
#include <stdlib.h>
int main(){
    int af,i;

    printf("\nEscribire el número de vectores que quieras generar\n");
    scanf("%d", &af);

    int *A;
    A = (int *)malloc (af*sizeof(int));
    for (i=0;i<af;i++){
            printf("\ninserte valores de la fila matriz(%d)\n",i+1);
            scanf("%d", &A[i]);
    }
    printf("\n\n\t\t\t Tu vector es:\n");
    for (i = 0; i < af; i++) {
	  printf("%6d", A[i]);
    }
    return 0;
}
