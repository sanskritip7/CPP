#include<stdio.h>
int main() 
{
int a[7], sum=0;
printf("Enter the elements of the array=\n");
for (int i=0; i<7; i++)
{
scanf("%d", &a[i]);
}
printf("Values of array =\n");
for (int j=0; j<7; j++)
{
printf("a[%d]=%d\n",j, a[j]);
}
printf("Sum of Array=");
for (int j=0; j<7; j++)
{
sum= sum+a[j];
}
printf("%d", sum);
return 0;
}
 
