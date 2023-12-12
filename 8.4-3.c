/*Q.3 Write a program to find the average of all elements in a 2D array.
enter row count : 3
enter column count : 3
enter value 1
enter value 2
enter value 3

enter value 4
enter value 5
enter value 6

enter value 7
enter value 8
enter value 9

 1 2 3
 4 5 6
 7 8 9

 sum = 45
 avg = 5
*/

#include<stdio.h>

main(){
	
int a[10][10];
int r,c,i,j,sum,avg;

    printf("enter row count : ");
    scanf("%d", &r);
	 
	printf("enter column count : ");
    scanf("%d", &c);

for(i=0; i<r; i++){
	for(j=0; j<c; j++){
		printf("enter value ");
		scanf("%d",&a[i][j]);
		
	}
	printf("\n");
}

for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	
		printf(" %d",a[i][j]);
		sum += a[i][j];
	}
	printf("\n");
}
    printf("\n sum = %d", sum);
    printf("\n avg = %d", sum/(r*c)) ;
 }
	

