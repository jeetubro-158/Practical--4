# include <stdio.h>
void main(){
    int n,Orignal,r,arm=0;
    printf("Enter any Number : ");
    scanf("%d", &n);
    Orignal = n;
    
    while(n > 0){
        r = n % 10;
        arm = arm + (r*r*r);
        n = n / 10;
    }
    if (arm == Orignal)
    printf("ARMSTRONG NUMBER\n");
    else
    printf("NOT AN ARMTRONG\n");

}