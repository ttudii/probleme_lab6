#include <stdio.h>

void ex_8(int *p,int *alfa, int col){

    int i;
    int aux,indice;
    int *temp;

    aux=sizeof(int)*col;

    temp=(int*)malloc(aux);

    i=0;
    while(i<col){
        indice=(i+*alfa)%col;
        *(temp+indice)=*(p+i);
        //printf("%d %d\n",*(temp+indice),*(p+i));
        i++;
    }

    i=0;
    while(i<col){
        *(p+i)=*(temp+i);
        i++;
    }

    *alfa=*alfa+1;

    free(temp);

}



int main(){

    int *m;
    int l,c;
    int dim;
    int i,j,k;

    do{
        printf("numar linii: ");
        scanf("%d",&l);
    }while(l<1);

    do{
        printf("numar coloane: ");
        scanf("%d",&c);
    }while(c<1);

    dim=sizeof(int)*l*c;

    m=(int*)malloc(dim);

    int *cit;
    cit=m;


    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
                scanf("%d",cit++);

        }
    }

    int *afis;
    afis=m;

        for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                printf("%3d ",*(afis++));
        }
        printf("\n");
    }

    printf("\n\n");

    i=1;
    k=0;

    while(k<l){
        ex_8(m+c*k,&i,c);
        k++;
    }


    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%3d ",*m++);
        }
    printf("\n");
    }

    free(m);

    return 0;

}




