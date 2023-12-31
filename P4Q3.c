# include <stdio.h>
void main(){
    int i,j,k,odd=1;
    for(i=4; i>=1; i--){
        for(j=(i-1); j>=1; j--){
            printf("  ");
        }
        
        for(k=1; k<=odd; k++){
            printf("%d ", (k%2));
        }
        odd=odd+2;
        printf("\n");        

    }
}