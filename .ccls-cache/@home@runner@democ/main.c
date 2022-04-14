#include <stdio.h>

int read_menu() {
  int option;
  printf("----* menu *----\n");
  printf("0 - exit        \n");
  printf("1 - do_demo     \n");
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
   
}

int main(void) {
  printf("----------------\n");
  printf("Sage-Code C Demo\n");
  int option = 1;

  while (option > 0) {
    option = read_menu();
    switch (option) {
      case 1: do_demo();
    }  
  }
  return 0;
}

