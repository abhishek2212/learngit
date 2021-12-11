#include<stdio.h>
int main(){
  int n1,n2,diff;
  printf("Enter a 1st number: ");
  scanf("%d",&n1);
  printf("Enter a 2nd number: ");
  scanf("%d", &n2);
  diff=n1-n2;
  printf("Subtraction of two number %d - %d = %d\n",n1,n2,diff);
  return 0;
}