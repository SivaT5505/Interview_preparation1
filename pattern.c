#include<stdio.h>
int main()
{
    int row,col,num,spc;
    scanf("%d",&num);
    for(row=1;row<=num;row++,printf("\n")){
        for(col=1;col<=row;col++)
        printf("*");
    }
    for(row=num;row>=1;row--,printf("\n")){
        for(col=1;col<=row;col++)
        printf("*");
    }
    return 0;
}
