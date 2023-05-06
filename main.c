#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{
 int seed = time(NULL);
    srand(seed);
	
  int m = 50;///max
  int n = rand()%m; 0-m random number
  
	

	  printf("%i/%i\n",n,m);

  
	return 0;
}
