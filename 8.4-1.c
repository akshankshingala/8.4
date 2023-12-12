/*Q.1 Write a program to add, subtract, and multiply two 2D arrays of the same size.

Enter the row :2
Enter the column :2
Enter the values:1
2
3
4
5
6
7
8
Addition Value:
        6       8
        10      12
subtract Value:
        -4      -4
        -4      -4
multi Value:
        5       12
        21      32
*/
#include<stdio.h>
int main()
{
  int r,c,a[10][10],i,j,b[10][10],t[10][10];
  printf("Enter the row :");
  scanf("%d",&r);
  printf("Enter the column :");
  scanf("%d",&c);
  printf("Enter the values:");
  
  
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      t[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("Addition Value:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("\t%d",t[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      t[i][j]=a[i][j]-b[i][j];
    }
  }
  printf("subtract Value:\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("\t%d",t[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      t[i][j]=a[i][j]*b[i][j];
    }
  }
  printf("multi Value:\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++){
      printf("\t%d",t[i][j]);
    }
    printf("\n");
  }
 
}


