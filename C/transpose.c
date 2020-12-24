#include<stdio.h>

int main(){
  int i,j,r,c,n,sparsematrix[10][10],matrix[10][10],transpose[20][20];
  printf("Enter the values for the sparse matrix: \n");
  for(i=0;i<3;i++){
    for(j=0;j<n;j++){
      scanf("%d",&sparsematrix[i][j]);
    }
  }
  for(i=0;i<n;i++){
      r = sparsematrix[0][i];
      c = sparsematrix[1][i];
      matrix[r][c] = sparsematrix[r][c];
  }
  for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      transpose[j][i] = matrix[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      printf("%d  ", transpose[i][j]);
        if (j == r - 1)
          printf("\n");
      }
}
