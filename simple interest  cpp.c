/*
program to calculate simple interest
Author:Naomi chelangat 
reg:CT101/G/23990/24
*/
//program printf(),scanf()
#include <stdio.h>
int main(){
 float principle,time,rate,interest;
 //prompt the user to enter principle 
 printf ("enter the principle:");
 scanf("%f",&principle);
 //prompt the user to enter time 
 printf("enter the time:");
 scanf("%f",&time);
 //prompt the user to enter the rate
 printf("enter the rate:");
 scanf("%f",&rate);
//calculate the interest
interest=principle*time*rate/100;
printf("the simple interests:%f/n",interest);
return 0;

}
 