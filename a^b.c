#include<stdio.h>
int main(){
    int a,b, store=1;
    printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter the power ");
    scanf("%d",&b);

    for(int i=1; i<=b; i++){
        store=store*a;
    }
    printf("%d",store);

    return 0;
}