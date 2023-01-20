#include <stdio.h>

struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon

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

int myNumbers[] = {25, 50, 75, 100};
int k;

for (k = 0; k < 4; k++) {
  printf("%d\n", myNumbers[k]);
}
const int minutesPerHour = 60;
int time = 20;
if (time < 18) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}
{
int x = 5;
int y = 10;
printf("%d\n", x + y);
}

int myAge = 43;
printf("%p\n", &myAge);

int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address 
printf("%p\n", ptr);

// Reference
printf("%p\n", ptr);

// Dereference
printf("%d\n", *ptr);

// Create an integer variable that will store the number we get from the user
int myNum;

// Ask the user to type a number
printf("Type a number: \n");

// Get and save the number the user types
scanf("%d", &myNum);

// Output the number the user typed
printf("Your number is: %d\n", myNum);
return 0;
}


int sum(int k);

int main2() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}