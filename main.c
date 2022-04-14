#include <stdio.h>
#include <stdlib.h>
#include "./src/test.h"

void clrscr()
{
    system("@cls||clear");
}

void print_menu() {
  printf("----* menu *----\n");
  printf("0 - exit        \n");
  printf("1 - do_demo     \n");
  printf("2 - src/test()  \n");
  printf("9 - menu        \n");
  printf("----------------\n");
}

int read_option() {
  int option;
  printf("run :> ");
  scanf("%d", &option);  
  printf("----------------\n");
  return option;
}

void do_demo () {
   // control variable
   printf("do demo:\n"); 
   int x = 1;
   // start loop
   do {
      x = x + 1;
   } while ( x < 4 );
   // end loop
  
   // expect to print x = 4
   printf("x = %d\n", x); 
   printf("done.\n");  
}

int main(void) {
  printf("----------------\n");
  printf("Sage-Code C Demo\n");
  int option = 1; 
  int count = 0;
  print_menu();
  while (option > 0) {
    option = read_option();    
    switch (option) {
      case 1: do_demo(); break;
      case 2: test(); break;
      default: 
         print_menu(); break;
    }  
    //clear screen after 5
    if count > 5 {clrscr();
       print_menu();      
       count = 0
    } else { count++ }
  }
  return 0;
}

