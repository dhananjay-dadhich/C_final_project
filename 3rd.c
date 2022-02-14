#include <stdio.h>
#include <stdbool.h>
int main()
{
    unsigned int inp_number,rev_number=0,factor=1;
    int i;
    bool inp_number_bits[32];
    printf("enter number:");
    scanf("%d",&inp_number);
    printf("\n%d = ",inp_number);
    for(i=31;i>=0;i--)
    {
        inp_number_bits[i]=(bool)(inp_number & factor);
        inp_number=inp_number>>factor;
        rev_number=((rev_number<<factor)|inp_number_bits[i]);
    }
    for(i=0;i<32;i++)
    {
	
        printf("%d",(int)inp_number_bits[i]);
	
        if((i+1)%8==0)
	
        {
            printf(" ");
        }
    }
    printf("\n");
    printf("After:\n%d = ",rev_number);
    for(i=0;i<32;i++)
    {
        printf("%d",(int)inp_number_bits[31-i]);
        if((i+1)%8==0)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
