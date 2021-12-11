#include<stdio.h>
int main(){
  int num1,num2,num3,sum;

  printf("Enter a 1st number: ");
  scanf("%d", &num1);
  printf("Enter a 2nd number: ");
  scanf("%d", &num2);
  printf("Enter a 3rd number: ");
  scanf("%d", &num3);
  sum = num1 + num2 + num3;
  printf("Addition of two number %d + %d + %d = %d\n",num1,num2,num3,sum);
  return 0;
}