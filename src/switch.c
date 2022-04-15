void sw_test() {
   char result = 'B';
   printf("enter grade:");
   scanf(" %c",&result);
   switch(result) {
      case 'A' :
         printf("Congratulation, you passed!\n" );
         break;
      case 'B': case'C': case 'D':
         printf("You have passed\n" );
         break;
      case 'F' :
         printf("You have failed\n" );
         break;
      default :
         printf("Invalid result\n" );
   }  
}

