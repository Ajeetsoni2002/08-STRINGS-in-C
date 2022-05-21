#include<stdio.h>
        int main()

        {
                //  3 subject marks of  2 students 

                int marks[2][3];
                marks[0][0]=90;
                marks[0][1]=95;
                marks[0][2]=96;

                marks[1][0]=93;
                marks[1][1]=94;
                marks[1][2]=92;
                
                printf("%d\n",marks[0][2]);

                return 0;
        }