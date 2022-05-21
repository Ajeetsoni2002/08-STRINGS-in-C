#include<stdio.h>
 
 int main()
 {
float price[3];
float totalprice;
printf("enter the price of 1st product\n ");
scanf("%f",&price[0]);
printf("enter the price of 2nd product\n ");
scanf("%f",&price[1]);
printf("enter the price of 3rd product\n ");
scanf("%f",&price[2]);
totalprice = price[0]+0.18* price[0] +price[1]+0.18* price[1]+price[2]+ 0.18* price[2];


printf("the total price of all product with GST is %f\n ",totalprice);






         return 0;
 }