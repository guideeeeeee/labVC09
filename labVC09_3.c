#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void SubFunc(int par1,char parCh[]);
void main (){
    int k = 1,i =0;
    char name[]="Test message to sent";
    printf("\n Main Function");
    printf("\n Integer number in Function main :%d",k);
    while(i<3){
        SubFunc(k,name);
        i++;
    }
    printf("\n\n Return to main Function");
    system("pause");
}
void SubFunc(int par1,char parCh[])
{
    static int y =0;
    y += par1;
    printf("\n SubFunction");
    printf("\n%d :%s",y,parCh);
    return;
}