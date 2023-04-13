#include<stdio.h>

int main(){
    int a,b,c,tmp;
    int ary[3];
    
    scanf("%d %d %d", &a, &b, &c);
    ary[0] = a;
    ary[1] = b;
    ary[2] = c;
    
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(ary[i] < ary[j]){
                            tmp = ary[j];
                            ary[j] = ary[i];
                            ary[i] = tmp;
                    }
            }
    }
    
    printf("%d\n%d\n%d\n", ary[0], ary[1], ary[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}