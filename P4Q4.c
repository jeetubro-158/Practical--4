# include <stdio.h>
void main(){
    int i,j,k,l,s=3;
    for(i=1; i<=4; i++){
        for(j=s; j>=1; j--){
            printf("  ");
        }
        for(k=i; k>=1; k--){
            printf("%d ", k);
        }
        for(l=2; l<=i; l++){
            printf("%d ", l);
        }
        s--;
        printf("\n");
    }
}