#include <stdio.h>

int ex_5(int *p,int *q, int dim){

    int i,j;
    int min;

    min=*p;

    i=j=0;

    for(i=0;i<dim;i++){
        if(*(p+i)<min) min=*(p+i);
    }

    //printf("\n\n%d\n",min);

    for(i=0;i<dim;i++){
        if(*(p+i)==min){
            *(q+j)=i;
             j++;
        }
    }

    return j;

}



int main(){

    int *p,*q,*afis;
    int dim;
    int aux;
    int i,j;

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

    for(i=0;i<ex_5(p,q,dim);i++){
        printf("%3d ",*(q+i));

    }

    free(p);
    free(q);


    return 0;

}
