#include <stdio.h>


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(w,x,y,z){
    int l= w>x? w>y? w>z? w:z : y>z? y:z : x>y? x>z? x:z : y;
    return l;
}
