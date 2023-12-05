#include <stdio.h>
void main() {
    int n = 5;
	int i,j,k=1; 
    char alpha = 'A';

    for (i=0;i<5;i++) {
        for (j=0;j<=i;j++) {
            if(j%2==0) {
                printf("%c ",alpha);
                alpha++;
            }else{
                printf("%d ",k);
                k++;
            }
        }
        printf("\n");
    }
}

