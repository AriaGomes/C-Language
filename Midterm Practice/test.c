#include <stdio.h>
#include <math.h>

int main(void)
{
  short int max_value = pow(2,(sizeof(int)*8-1))-1;
	printf("The last postive  value is: %d\n", max_value);
  return 0;
}
