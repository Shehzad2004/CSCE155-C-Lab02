#include<stdio.h>
int main()

{

float usdol,jYen, gbrpound, ex_tax;

printf("Please Enter the current value of US-dollars: ");
 scanf("%f",&usdol);

ex_tax=0.1*usdol;
usdol-=ex_tax;

gbrpound=usdol/2*0.79; 
jYen=usdol/2*127.65;

printf("The Exchange Tax=%0.2f\n",ex_tax);
 printf("The great britian pound=%0.2f\n", gbrpound);
  printf("The Japenese yen=%.0f\n",jYen); 
}