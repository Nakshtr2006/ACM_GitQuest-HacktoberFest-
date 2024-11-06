#include <stdio.h>
int main(){
    printf("Who's factorials do you want\n");
    int n;
    scanf("%d", &n);
    
    int count=1;
    int product=1;
    while (count<=n){
        product*=count;
        count++;
    }
    printf("%d\n", product);
    return 0;
}