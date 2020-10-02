#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "converter.h"
int main(int arc, char *argv[])
{

   int c;
   char *baseUnit = argv[1];

   if (baseUnit == NULL)
   {
      printf("Unit to be converted to must be passed as first agument", 30);
      exit(1);
   }

  

   char *line = NULL;
   size_t len = 0;
   ssize_t lineSize = 0;
   lineSize = getline(&line, &len, stdin);
   char * valueString = strtok(line, " ");
   float value = atof(valueString);

   char * unit = strtok(NULL, "\n");

   float convertedValue = convertValue(value, unit, baseUnit);
   
   printf("%0.6f %s\n", convertedValue, baseUnit);


   return 0;
}
