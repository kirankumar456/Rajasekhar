#include <stdio.h>
#include <float.h>

int main()
{
printf("Storage size for float : %d\n", sizeof (float));
printf("Minimum float positive value: %E\n", FLT-MIN);
printf("Maximum float positive value: %E\n", FLT-MAX);
printf("Precision value: %d\n", FLT-DIG);

return 0;
}
