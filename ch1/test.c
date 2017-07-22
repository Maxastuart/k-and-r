#include <stdio.h>
#include <string.h>

int main()
{
  int numbers[5] = {10, 20, 30, 40, 50};

  int sum = 0;

  for (int i = 0; i < 2; ++i) {
    // printf("i = %d\n", i);
    sum = sum + numbers[i];
  }

  long product = 1;
  int i = 0;
  while (i < 5) {
    product = product * numbers[i];
    ++i;
  }

  printf("sum = %d\n", sum);
  printf("product = %ld\n", product);


  // pointers
  char *name = "Lee";
  printf("*name = %s\n", name);
  printf("*name = %p\n", name);

  name = "Joey";
  printf("*name = %s\n", name);
  printf("*name = %p\n", name);
  printf("*name[0] = %c\n", name[0]);

  // strlen
  int length = strlen(name);
  printf("length = %d\n", length);


  // strcpy
  // char *new_name;
  // strcpy(new_name, *name);
  // printf("%s\n", new_name);



  return 0;
}
