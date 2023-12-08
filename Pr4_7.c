/*
Q.7 Write a Program to print the below pattern using nested for loop.
           *
        *     *
      *         *
    *             *
  *                 *
*/
#include <stdio.h>
void main() {
  int i,j,k;
  for (i=1;i<=5;i++){
  	for(k=4;k>=i;k--){
  		printf(" ");
	  }
    for(j=1;j<=i;j++){
    	(j==1)?printf("*"):printf(" ");
	}   
    for(j=2;j<=i;j++) {
      	(j==i)?printf("*"):printf(" ");
    }
    printf("\n");
  }
}

