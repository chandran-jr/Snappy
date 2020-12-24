#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch[1000];
    scanf("%s",&ch);
    int f[10];
    for(int i=0;i<10;i++){
        f[i]=0;
    }
    

    int l= strlen(ch);

    for(int i=0;i<l;i++){
        int k=ch[i];

        if(k>=48 && k<=57){
            int t= k-48;
            f[t]=f[t]+1;}
    }

    for(int i=0;i<10;i++){
        printf("%d ",f[i]);
    }

        

       


    return 0;
}
