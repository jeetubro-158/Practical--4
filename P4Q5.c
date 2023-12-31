# include <stdio.h>
void main(){
    int i,j,k,l;
    for(i=5; i>=1; i--){
        for(j=i; j>=1; j--){
            if(j==i)
            printf("%d", j);
            else
            printf(" %d", j);
        }
        for(k=1; k<=(5-i); k++){
            printf("  ");
        }
        printf("\b");
        for(k=1; k<=(5-i); k++){
            printf("  ");
        }
        for(l=1; l<=i; l++){
            printf("%d ", l);
        }
        printf("\n");
        printf("\b");
    }

}