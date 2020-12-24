#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a[1000];
int n;
int sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum+=a[i];
}

printf("%d\t",sum);
    return 0;
}
