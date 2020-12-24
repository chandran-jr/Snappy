#include <stdio.h>
#include <string.h>
#include <math.h>

void nextMove(int n, int r, int c, char grid[101][101]){
    int prx=0;
    int pry=0;
    int botx=r;
    int boty=c;
    int z=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='p'){
                prx=i;
                pry=j;
                break;
            }
        }
    }
    if(pry<boty){
       printf("LEFT\n");
        boty--;
        }
    
      else if(pry>boty){
            printf("RIGHT\n");
            boty++;
    }
    
    else{
     if(prx<botx&&pry==boty){
            printf("UP\n");
            botx--;
    }
     else if(prx>botx&&pry==boty){
            printf("DOWN\n");
            botx++;
    }
    else{
        z++;
    }
    }
    
    
}

int main(void) {

    int n, r, c;

    scanf("%d", &n);
    scanf("%d", &r);
    scanf("%d", &c);

	char grid[101][101];
    
    for(int i=0; i<n; i++) {
        scanf("%s[^\n]%*c", grid[i]);
    }

    nextMove(n, r, c, grid);
    return 0;
}
