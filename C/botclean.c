#include<stdio.h>
#include <string.h>
#include <math.h>

void next_move(int posr, int posc, char board[5][5]) {
    int prx=0;
    int pry=0;
    int botx=posr;
    int boty=posc;
    int z=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(board[i][j]=='d'){
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
        if(prx<botx){
            printf("UP\n");
            botx--;
        }
        else if(prx>botx){
            printf("DOWN\n");
        botx++;
        }
        else if(prx==botx && pry==boty){
            printf("CLEAN\n");
            board[prx][pry]='-';
        }
        else{
            z++;
        }
    }
   
    
}


int main(void) {
    int pos[2], i;
    char board[5][5], line[6];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    for(i=0; i<5; i++) {
        scanf("%s[^\\n]%*c", line);
        strncpy(board[i], line, 5);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
