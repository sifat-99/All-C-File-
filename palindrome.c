#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i, length;
    int count = 0;
    printf("Enter a string:");
    scanf("%s", name);
    
    length = strlen(name);
    
    for(i=0;i < length ;i++){
        if(name[i] != name[length-i-1]){
            count = 1;
            break;
            }
        }
    
    if (count) {
        printf("%s is not a palindrome", name);
    }    
    else {
        printf("%s is a palindrome", name);
    }
    return 0;
}