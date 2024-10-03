/*
//program to calculate compound interest
Author: Naomi chelangat 
date:2/10/2024
*/
#include<stdio.h>
#include<math.h> // For pow

int main ()
{
float principle, time, rate, amount, compound_interest;
int n;
     
//   prompt the user to enter principle 
printf("enter the principle :");
scanf("%f",&principle);
     
// prompt the user to enter time
printf("enter the time :");
scanf("%f",&time);
     
//prompt the user to enter the rate 
printf("enter the rate :"); scanf("%f",&rate);
     
//     prompt the user to enter the value of n
printf("enter the value of n :");
scanf("%d",&n);
// calculate the amount
 amount=principle *pow((1+(rate/(100*n))),n*time);  compound_interest=amount-principle;
     
 printf("amount is; %.2f \n",amount);
 printf("compound_interest is %.3f \n",compound_interest);
     
 return 0;   
 }