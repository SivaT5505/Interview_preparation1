#include<stdio.h>
int main()
{
    int row,col,num,spc;
    scanf("%d",&num);
    for(row=num;row>=1;row--,printf("\n")){
        for(spc=1;spc<=num-row;spc++)
        printf(" ");
        for(col=1;col<=2*row-1;col++)
        printf("*");
    }
    for(row=1;row<=num;row++,printf("\n")){
        for(spc=1;spc<=num-row;spc++)
        printf(" ");
        for(col=1;col<=2*row-1;col++)
        printf("*");
    }
    return 0;
}
