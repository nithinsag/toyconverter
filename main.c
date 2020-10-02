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

   float baseConversionFactor = getConversionFactor(baseUnit);

   if (baseConversionFactor < 0)
   {
      printf("given unit %s is not supported", baseUnit, 30);
      exit(1);
   }

   char *line = NULL;
   size_t len = 0;
   ssize_t lineSize = 0;
   lineSize = getline(&line, &len, stdin);
   char * valueString = strtok(line, " ");
   float value = atof(valueString);

   char * unit = strtok(NULL, "\n");

   float inputUnitConversionFactor = getConversionFactor(unit);
   if (inputUnitConversionFactor < 0)
   {
      printf("input unit %s from is not supported", unit, 30);
      exit(1);
   }


   float  inputValueinStandard  =  value / inputUnitConversionFactor;

   float convertedValue = inputValueinStandard * baseConversionFactor;

   printf("%0.6f %s\n", convertedValue, baseUnit);


   return 0;
}
