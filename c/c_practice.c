#include <stdio.h>

int main() 
{
     printf("Hello World!\n");
    printf("I am learning C.\n");
 
    int number = 2;
    // evaluates each case then runs the appropriate one
    switch (number) {
        case 1:
        printf("one\n");
        break;
        case 2:
        printf("two\n");
        break;
        case 3:
        printf("three\n");
        break;
}

int i;

for (i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  printf("%d\n", i);
}

int j;

for (j = 0; j < 10; j++) {
  if (j == 4) {
    continue;
  }
  printf("%d\n", j);
}
}