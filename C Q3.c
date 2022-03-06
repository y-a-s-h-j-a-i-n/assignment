#include<stdio.h>

void main()
{
    int a[10]={1,5,4,8,9,2,0,6,11,7};
    int b;

    printf("Enter the element for search : ");
    scanf("%d", &b);

    for(int i=0;i<10;i++){
        if(b==a[i]){
           printf("YES");
           break;
        }
        if(i==9)
            printf("NO");

    }
}