#include <stdio.h>

int main(){
  int N,M,T,i,j,k,l,flag,arr[100000];
  flag=0;
  printf("Enter T: ");
  scanf("%d",&T);
  for(i=1;i<=T;i++){
    printf("Enter N: ");
    scanf("%d",&N);
    printf("Enter M: ");
    scanf("%d",&M);
    printf("Input the no. of candies with each student: ");
    for(j=0;j<N+M;j++){
        scanf("%d",&arr[j]);
    }
    for(l=N;l<(N+M);l++){
        flag=0;
        for(k=0;k<N;k++){
          if(arr[k]==arr[l]){
            printf("YES\n");
            flag=1;
            break;
          }
        }
        if(flag==0){
          printf("NO\n");
        }
    }
    
  }
}
