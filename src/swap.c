#include <stdio.h>
void swap(int *x, int *y) {
   register int t; //temporary value
   t = *y; *y = *x; *x = t;
}
 
void swap_test () {

   int a = 1, b = 2;

   printf("before\n");
   printf("a = %d b = %d \n",a,b);
   swap(&a, &b); //function call
   printf("after\n");   
   printf("a = %d b = %d \n", a, b);
}
