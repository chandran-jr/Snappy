#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lowestTriangle(float base, float area){
    float h= (2*area)/base;
    int k= (int)h;
    if(h-k>0.00000000001){
        k++;
    }
    return k;
    
    

}




int main() {
    float base; 
    float area; 
    scanf("%f %f", &base, &area);
    int height = lowestTriangle(base, area);
    printf("%d\n", height);
    return 0;
}
