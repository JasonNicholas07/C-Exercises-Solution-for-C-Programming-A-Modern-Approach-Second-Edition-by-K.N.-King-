<h1>Question</h1>
Write a program that declares several int and float variables—without initializing them—and then prints their values.</br> 
Is there any pattern to the values? (Usually there isn’t.)


<h1>Solution</h1>

```C
#include <stdio.h>
int main (){

  int x, a, b;
  float y;

  printf("X: %d\n", x);
  printf("A: %d\n", a); 
  printf("Y value: %d\n", y);

  return 0;
}
```
There isn't any pattern to the values, outputs random 'garbage' value.
