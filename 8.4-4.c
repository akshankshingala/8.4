/*Q.4 Write a program to find the minimum and maximum and same element in a 2D array.

enter the size of row:3
enter the size of coln:3
enter a[0][0] : 1
enter a[0][1] : 2
enter a[0][2] : 3
enter a[1][0] : 45
enter a[1][1] : 6
enter a[1][2] : 8
enter a[2][0] : 74
enter a[2][1] : 5
enter a[2][2] : 5
the largest element : 74
the minimum element : 1
the same element : 1
*/

#include<stdio.h>
void main(){

int l,r,c,i,j,m,s;
printf("enter the size of row:");
scanf("%d",&r);
printf("enter the size of coln:");
scanf("%d",&c);

int a[r][c];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("enter a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);
}
}

s=a[0][0];
m=a[0][0];
l=a[0][0];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(l<a[i][j]){
l=a[i][j];
}
if(m>a[i][j]){
m=a[i][j];
}
if(s==a[i][j]){
s=a[i][j];
}
}
}

printf("the largest element : %d\n",l);
printf("the minimum element : %d\n",m);
printf("the same element : %d\n",s);

}

