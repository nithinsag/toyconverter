#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float getConversionFactor(char *unit)
{
  if (strcmp("ug/100mL", unit) == 0)
    return 100000.0;
  else if (strcmp("mg/L", unit) == 0)
    return 1000.0;
  else if (strcmp("g/210L", unit) == 0)
    return 210.0;
  else if (strcmp("g/230L", unit) == 0)
    return 230.0;
  else if (strcmp("g/dL", unit) == 0)
    return 0.1;
  else if (strcmp("ug/L", unit) == 0)
    return 1000000.0;
  else if (strcmp("g/L", unit) == 0)
    return 1.0;
  else return -1.0;
}

// int main(void)
// {
//   // printf("Please enter a line:\n");
//   // char *line = NULL;
//   // size_t len = 0;
//   // ssize_t lineSize = 0;
//   // lineSize = getline(&line, &len, stdin);
//   // printf("You entered %s, which has %zu chars.\n", line, lineSize - 1);
//   // free(line);
//   getConversionFactor("someunit");
//   return 0;
// }
