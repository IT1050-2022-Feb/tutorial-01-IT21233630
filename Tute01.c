/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1,sub2;
  float avg=0;

  printf("enter subject 1:");
  scanf("%d",&sub1);

  printf("enter subject2:");
  scanf("%d",&sub2);

  avg =sub1+sub2/2;

  printf("The average is %f\n",avg);
  
  
  return 0;
}

