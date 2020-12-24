#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char str[100];
    int k=0;
    scanf("%s", str);
    int l= strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='a'|| str[i]=='b'||str[i]=='c'){
            printf("2");
        }
        else if(str[i]=='d'|| str[i]=='e'||str[i]=='f'){
            printf("3");
        }
        else if(str[i]=='g'|| str[i]=='h'||str[i]=='i'){
            printf("4");}
        else if(str[i]=='j'|| str[i]=='k'||str[i]=='l'){
            printf("5");}
        else if(str[i]=='m'|| str[i]=='n'||str[i]=='o'){
            printf("6");}
        else if(str[i]=='p'|| str[i]=='q'||str[i]=='r'||str[i]=='s'){
            printf("7");}
        else if(str[i]=='t'|| str[i]=='u'||str[i]=='v'||str[i]=='w'){
            printf("8");}
        else if(str[i]=='x'|| str[i]=='y'||str[i]=='z'){
            printf("9");}
        else{
            k++;
        }
        
    }
    return 0;
}
