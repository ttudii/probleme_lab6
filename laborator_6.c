#include <stdio.h>

void ex_3(int *p, int dim, int *poz, int *neg, int *nul){

    int i=0;

    while(i<dim){

            if(*(p+i)>0)
            {
                *poz=*poz+1;
                //printf("pozitiv\n");
            }

        else
            if(*(p+i)<0)
            {
                *neg=*neg+1;
                //printf("negativ\n");
            }

        else
            if(*(p+i)==0)
            {
                *nul=*nul+1;
                //printf("nul\n");
            }

        i++;
    }


}


int main(){
    int neg=0,poz=0,nul=0;
    int dim,aux;
    int *p;
    int i;

    do{
       printf("numarul de elemente ale vectorului: ");
       scanf("%d",&dim);
    }while(dim<1);

    aux=dim;
    aux=sizeof(int)*aux;

    p = (int*)malloc(aux);

    for(i=0;i<dim;i++){
        scanf("%d",p+i);
    }

    printf("\n");

    for(i=0;i<dim;i++){
        printf("%3d ",*(p+i));
    }

    ex_3(p,dim,&poz,&neg,&nul);

    printf("\n\nvalori negative %d\nvalori pozitive %d\nvalori nule %d\n",neg,poz,nul);

    free(p);

    return 0;

}
