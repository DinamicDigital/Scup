#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include "util.h"

int main(int argc, char* argv[])
{
	
	if (argc != 2)
	{
		fprintf(stderr, "usage: scup <src_file>");
		return -1;
	}
	printf("%s\n", argv[1]);
	
	char* buffer = create_buffer_from_file(argv[1]);

	printf("%s :END_FILE\n", buffer);
	
	return 0;
}

