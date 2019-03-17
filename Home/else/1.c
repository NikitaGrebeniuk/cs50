#include <stdio.h>
int main(void)
{
  FILE* file = fopen("homework.txt", "w");
  if (file != NULL)
  {
    fprintf(file, "Hello, world!");
    fclose(file);
  }
}