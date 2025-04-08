#include <stdio.h>
#include <stdlib.h>

/* main program */

int main()
{
  // initialization
  int i = 0;
  char msg[] = "Hello World!\n";

  // initial message
  printf(msg);

  // main program loop
  for (i = 0; i < 5; ++i)
    printf("%d\n", i);

  // output results
  return 0;
}