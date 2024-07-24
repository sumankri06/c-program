if elseif ladder.c
#include<stdio.h>
int main(){
    int a;
    printf("enter a no.;a");
    scanf("%d",&a);
    if(a>90){
        printf("A+");
    }
    else if(80<a>=90)
    printf("A");
    else if(70<a>=80)
    printf("B");
    else if (60<a>=70)
    printf("C");
    else if(50<a>=60)
    printf("D");
    else
    printf("F");
    }
    return 0;
}