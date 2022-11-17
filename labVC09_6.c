#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float Subfunc( float *vpt);
void main()
{
    float rfv, fvar[2]={2.3,5.7};
    rfv = Subfunc(fvar);
    printf("\n Value of rfv = %f",rfv);
    system("pause");
}
float Subfunc(float *vpt)
{
    float sfr;
    sfr = vpt[0] *vpt[1];
    return(sfr);
}