/*
Q.9 Write a Program to print the below pattern using nested for loop.


A
B 1 
C 2 D
E 3 F 4
G 5 H 6 I
*/
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

