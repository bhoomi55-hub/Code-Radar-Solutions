#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral\n");
    }
    else if(a==b){
        printf("Isosceles\n");
    }
    else if(a!=b && b!=c && c!=a){
        printf("Scalene\n");
    }
    return 0;
}