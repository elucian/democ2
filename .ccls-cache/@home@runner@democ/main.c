#include <stdio.h>
#include <stdlib.h>
#include "./src/test.h"
#include "./src/ladder.h"
#include "./src/switch.h"
#include "./src/function.h"
#include "./src/swap.h"

// clear screen
void clrscr()
{
    system("@cls||clear");
}

void print_menu() {
  printf("----* menu *----\n");
  printf("0 - exit        \n");
  printf("1 - do_demo     \n");
  printf("2 - src/test()  \n");
  printf("3 - src/ladder()\n");
  printf("4 - src/sw_test()\n");
  printf("5 - src/fn_test()\n");
  printf("6 - src/swap_test()\n");
}

int read_option() {
  int option;
  printf("----------------\n");
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
      case 0: break;
      case 1: do_demo(); break;
      case 2: test(); break;
      case 3: ladder(); break;
      case 4: sw_test(); break;      
      case 5: fn_test(); break;      
      case 6: swap_test(); break;      
      default: 
         printf("not implemented\n");
         print_menu(); break;
    }  
    //clear screen after 5
    if (count > 5) {clrscr();
       print_menu();      
       count = 0;
    } else { count++; }
  }
  printf("Good By!\n");
  return 0;
}

