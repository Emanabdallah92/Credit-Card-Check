#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    char pan_num[20];
    printf("Enter the primary account number: ");
    scanf(" %[^\n]",pan_num);
    int pan_num_len= strlen(pan_num);
   
    long long pan;
    sscanf(pan_num, " %llu", &pan);
   
        long long q=pan;
    int i, rem, sum=0;
    for(i=0; i<pan_num_len; i++)
    {
        rem = q%10;
        if((i % 2) != 0)
            rem = rem*2;
        if(rem>9)
            rem = rem - 9;
        sum = sum + rem;
        q=q/10;
    }
    printf("%d\n",sum);
    
    if((sum%10)!=0)
        printf("Not A Luhn Number");
        else
            printf("Is A Luhn Number");
}


