#include <stdio.h>

int ex_4(float *p, float *q, float *rez, int dim_p, int dim_q){

    int i,j,k;
    int contor;


    k=0;

    for(i=0;i<dim_p;i++){
            contor=0;
        for(j=0;j<dim_q;j++){
            if(*(p+i) == *(q+j)) contor++;

        }

    if(contor!=0){
        *(rez+k)=*(p+i);
        k++;
    }

    }

    return k;
}




int main(){

    float *p,*q;
    float *rez;
    int dim_p,dim_q,dim_rez;
    int aux_p,aux_q,aux_rez;
    int i,j;

    do{
        printf("numar elemente vector_1: ");
        scanf("%d",&dim_p);
    }while(dim_p<1);

    printf("\n\n");

    do{
        printf("numar elemente vector_2: ");
        scanf("%d",&dim_q);
    }while(dim_p<1);

    printf("\n\n");

    aux_p=dim_p;
    aux_q=dim_q;

    aux_p=sizeof(int)*aux_p;
    aux_q=sizeof(int)*aux_q;
    aux_rez=sizeof(int)*(dim_p+dim_q);

    p=(float*)malloc(aux_p);
    q=(float*)malloc(aux_q);
    rez=(float*)malloc(aux_rez);

    for(i=0;i<dim_p;i++){scanf("%f",p+i);}
    printf("\n");
    for(i=0;i<dim_p;i++){printf("%3.2f ",*(p+i));}

    printf("\n\n");

    for(j=0;j<dim_q;j++){scanf("%f",q+j);}
    printf("\n");
    for(j=0;j<dim_q;j++){printf("%3.2f ",*(q+j));}

    printf("\n\n");

    if(ex_4(p,q,rez,dim_p,dim_q)!=0){

        for(i=0;i<ex_4(p,q,rez,dim_p,dim_q);i++){
            printf("%3.2f ",*(rez+i));
        }

    }

    else printf("vectorul nu a putut fi construit.");

    free(p);
    free(q);
    free(rez);


    return 0;
}




