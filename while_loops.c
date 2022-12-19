#include<stdio.h>


int main(void)
{
    int i = 10;
    while (i < 15) {
    printf("i is %d\n", i);
    i++;
    }
    return 0;
}

int main(void){ // not main occasions with the need to run do/while
                // Use do/while when you want to execute at least once
  int x = 10;
  do {
    printf("%d\n", x);
    x++;
  }
  while (x < 10);

  return 0;
} // usually this would not run but since we have the Do, it runs first