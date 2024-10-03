/*
program to calculate loan
Author:Naomi chelangat 
reg:CT101/G/23990/24
*/
//program printf(),scanf()
#include <stdio.h>
int main() {
int age; 
float income;
//check the ageof the customer;
printf("enter the age");
scanf("%d,& age "); 
//check the  annual income of the customer;
printf("enter the annual income");
scanf("%f,&annual income");
//check if the customer is qualified for a loan \n;
if(age>21& income>21000){
printf("congratulation you qualify for a loan\n");
}else{
printf("unfortunately, we are unable to offer a loan at this time,\n");
}
return 0;
}
 