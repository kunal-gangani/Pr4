/*
Q.8 Write a Program to print the below pattern using nested for loop.

81
81 82 
81 82 83 
81 82 83 84 
81 82 83 84 85
*/
#include<stdio.h>
void main(){
	int i,j;
	for(i=81;i<=85;i++){
		for(j=81;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
