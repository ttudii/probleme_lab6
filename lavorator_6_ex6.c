#include <stdio.h>

void ex_6(int *p,int *q, int dim, int *indice){

    int i,j;

    int elim=*(p+0);

    i=j=0;

    for(i=0;i<dim;i++){
        if(*(p+i)==elim)
        {
            *(q+*indice)=i;
            *indice=*indice+1;
        }
    }

    printf("\n");
}


int main(){

    int *p,dim,aux;
    int *q;
    int i,k;
    int indice=0,contor;

    do{
        printf("numar de elemente: ");
        scanf("%d",&dim);
    }while(dim<1);

    aux=sizeof(int)*dim;

    p=(int*)malloc(aux);
    q=(int*)malloc(aux);

    for(i=0;i<dim;i++) scanf("%d",p+i);
    printf("\n\n");
    for(i=0;i<dim;i++) printf("%3d ",*(p+i));

    printf("\n\n");

    ex_6(p,q,dim,&indice);

    //for(i=0;i<indice;i++) printf("%3d ",*(q+i));
    //printf("%d\n",indice);

    printf("sirul dupa eliminarea elementului din sir:\n\n");

    for(i=0;i<dim;i++){

        k=0;
        contor=0;

        while(k<indice){
            if(i==*(q+k)) contor++;
        k++;
        }

        if(contor==0) printf("%3d ",*(p+i));

    }

    printf("\n");

    free(p);
    free(q);

    return 0;

}
