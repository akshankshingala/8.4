/*Q. 2 

Write a program to find the sum of all elements in a 2D array.

enter row count : 2
enter row count : 2
enter value [0][0]1
enter value [0][1]2
enter value [1][0]3
enter value [1][1]4
12
34
0
0
*/
#include<stdio.h>

main(){
	
int n,a[10][10];
int c,i,j,sum[10][10];
    printf("enter row count : ");
    scanf("%d", &n);
	printf("enter row count : ");
    scanf("%d", &c);
    
	 for (i=0;i<n; i++){
	 	for (j=0; j<n;j++){
	 	sum[i][j]=0;
	 	printf("enter value [%d][%d]",i,j);
    	scanf("%d", &a[i][j]);
		 }
	 	
	 }
	 
	 for(i=0;i<n;i++){
	 	
	 	sum[i][j]=0;
	 	for(j=0;j<n; j++){
	 		printf("%d",a[i][j]);
	 	
	 		sum[i][j]+= a[i][j];
		 }
	 	printf("\n");
	 }
	 for(i=0; i<n; i++){
	 	printf("%d\n",sum[i][j]);
	 }
}
	 

