#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

#define MAX_BUF_SIZE 8162 // bytes 

int main(int argc, char* argv[])
{
	
	if (argc != 2)
	{
		fprintf(stderr, "usage: scup <src_file>");
		return -1;
	}
	
	char buffer[MAX_BUF_SIZE];
	size_t src_file_size;
	
	int source_file = open(argv[1], O_RDONLY); // open file for reading.

	if (source_file == -1)
	{
		perror("scup");
		return -1;
	}
	
	while ((src_file_size = read(source_file, &buffer, MAX_BUFFER_SIZE)) > 0)
	{
		
	}

	return 0;
}
