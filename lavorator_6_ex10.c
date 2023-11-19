#include <stdio.h>

void ex_10(int *p, int *q, int col1, int col2, int *identic){

    int i,j;
    int contor=0;

    if(col1==col2){
        for(i=0;i<col1;i++){
            if(*(p+i)==*(q+i)) contor++;
        }
    if(contor==col1) *identic=*identic+1;
    }

    //printf("%d \n",*identic);
}


int main(){

    int *m1,*m2;
    int l1,c1,l2,c2;
    int dim_m1,dim_m2;
    int identic=0;
    int i,j;

    do{
        printf("numar linii matrice 1: ");
        scanf("%d",&l1);
    }while(l1<1);

    do{
        printf("numar coloane matrice 1: ");
        scanf("%d",&c1);
    }while(c1<1);

    printf("\n\n");

    dim_m1=sizeof(int)*l1*c1;

    m1=(int*)malloc(dim_m1);

    int *cit_1;
    cit_1=m1;


    for(i=0;i<l1;i++){
        for(j=0;j<c1;j++){
                scanf("%d",cit_1++);

        }
    }

    int *afis_1;
    afis_1=m1;

        for(i=0;i<l1;i++){
            for(j=0;j<c1;j++){
                printf("%3d ",*(afis_1++));
        }
        printf("\n");
    }

    printf("\n\n");


    do{
        printf("numar linii matrice 2: ");
        scanf("%d",&l2);
    }while(l2<1);

    do{
        printf("numar coloane matrice 2: ");
        scanf("%d",&c2);
    }while(c2<1);

    printf("\n\n");

    dim_m2=sizeof(int)*l2*c2;

    m2=(int*)malloc(dim_m2);

    int *cit_2;
    cit_2=m2;


    for(i=0;i<l2;i++){
        for(j=0;j<c2;j++){
                scanf("%d",cit_2++);

        }
    }

    int *afis_2;
    afis_2=m2;

        for(i=0;i<l2;i++){
            for(j=0;j<c2;j++){
                printf("%3d ",*(afis_2++));
        }
        printf("\n");
    }

    printf("\n\n");


    int k=0;

    if(l1==l2){
        while(k<l1){
            ex_10(m1+k*c1,m2+k*c2,c1,c2,&identic);
            k++;
        }
        if(identic==l1) printf("cele doua matrice sunt identice\n\n");

        else printf("cele doua matrice nu sunt identice\nau fost identice doar %d linii ale celor 2 matrice.\n",identic);
    }

    else

    printf("cele doua matrice nu sunt identice\n\n");

    free(m1);
    free(m2);

    return 0;

}
