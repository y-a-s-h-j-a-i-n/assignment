#include<stdio.h>
void merge(int x[],int y[],int size_x,int size_y){
    int temp,first;
    for(int i=0;i<size_x;i++){
        if(x[i]>y[0]){
            temp=x[i];
            x[i]=y[0];
            y[0]=temp;
            first=y[0];
            int k=1;
            while(k<size_y&&y[k]<first){
                y[k-1]=y[k];
                k=k+1;
            }
            y[k-1]=first;
        }
    }
}
int main(){
    /*int x[5]={1,4,7,8,10};
    int y[3]={2,3,9};
    int size_x=5,size_y=3;*/
    int size_x,size_y;
    int x[size_x];
    int y[size_y];
    printf("enter the size of x:");
    scanf("%d",&size_x);
    printf("enter the element of x:");
    for(int i=0;i<size_x;i++){
        scanf("%d",&x[i]);
    }
    printf("enter the size of y:");
    scanf("%d",&size_y);
    printf("enter the element of y:");
    for(int i=0;i<size_y;i++){
        scanf("%d",&y[i]);
    }
    merge(x,y,size_x,size_y);
printf("x[] =");
for(int i=0;i<size_x;i++)
printf("%d,",x[i]);
printf("\ny[] =");
for(int i=0;i<size_y;i++)
printf("%d,",y[i]);
printf("\n");
}
