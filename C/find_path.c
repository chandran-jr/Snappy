#include <stdio.h>

int main(){
  int N,i,j,k,l,maze[100][100];
  printf("Input the value of N(matrix size): ");
  scanf("%d",&N);
  printf("Input the maze matrix: ");
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      scanf("%d",&maze[i][j]);
    }
  }

  int rat_row=0, rat_col=0;
  int r=0;
  int c=0;

  int mov = 0;
  int total = (N-1)*2;


while(mov<total){
  if(maze[r+1][c]==1){
    mov+=1;
    r+=1;
    rat_row+=1;
    printf("DOWN\n");
  }

  else if(maze[r][c+1]==1 ){
    mov+=1;
    c+=1;
    rat_col+=1;
    printf("FORWARD\n");
}

else{
  printf("THE RAT CANNOT REACH ITS DESTINATION");
  break;
  }
}


}
