#include<stdio.h>
int main()
{
    int n, cnt1=1,cnt2=0;
    scanf("%d",&n);
    int ary[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ary[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ary[i] == ary[j]){
                cnt1++;
            }
        }
        if(cnt1>cnt2){
            cnt2=cnt1;
        }
        cnt1=1;
    }
    printf("%d\n",cnt2);
}