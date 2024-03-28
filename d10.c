#include<stdio.h>
 #include<string.h>
 int main()
 {
   char s[100];

   // take input
   printf("Enter a string: ");
   scanf("%[^\n]",s);

   // display output
   printf("In Upper Case:\n");
   puts(strupr(s));

   return 0;
 }