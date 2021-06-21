//INPUT - 4 1 2 3 4
//OUTPUT - Sum of elements=10


#include <stdio.h>

 
int main()
{
   int a[5],i,sum,n=0;
   
   scanf("%d", &n);
 
  // printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
      sum=sum+a[i]; 
   }
 printf("Sum of elements=%d",sum );
 
  return 0;
}
