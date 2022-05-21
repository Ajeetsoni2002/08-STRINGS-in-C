#include<stdio.h>
int main()
{
        int aadhar[5];

        // input
        int *ptr =&aadhar[0];
        for(int i=0; i<=5;i++)
        {
                printf("%d index ",i);
                scanf("%d",(ptr+i));/*  we replace (ptr+i) it with &aadhar */

        }
        //  output
        for(int i=0; i<=5;i++)
        {
                printf("%d index=%d\n",i,*(ptr+i)); /* we can replace (ptr+i) with aadhar[i] */
        }

        
        
        
        
        
        return 0;
}