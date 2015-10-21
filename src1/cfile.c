#include <stdio.h>

#include "include/functions.h"
#include "include/data.h"
#include "version.h"

int main(int argc,char * argv[])
{
  printf("Hello World\""
        "Version %s\n",GIT_VERSION);
	printf("data_item1=%d\n"
	       "data_item2=%d\n",
	       data_item1,data_item2);
	return 0;
}
