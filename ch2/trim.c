#include <stdio.h>
#include <string.h>

#define MAXLINE 2000

int trim(char s[]);

int main(void)
{
   printf("Enter a string: ");

   char s[MAXLINE];

   fgets(s, MAXLINE, stdin);

   trim(s);

   printf("%s", s);
   printf("\n");
}


/* trim: remove trailing blanks, tabs, newlines */

int trim(char s[])
{
   int n;

   for (n = strlen(s)-1; n >= 0; n--) {

      if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
         break;
      }

      s[n] = '\0';
   }

   return n;
}

