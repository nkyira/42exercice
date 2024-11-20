#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	printf("%s\n", get_next_line(open("text", O_RDONLY)));	
	printf("%s\n", get_next_line(open("text", O_RDONLY)));	
	printf("%s\n", get_next_line(open("text", O_RDONLY)));	
	printf("%s\n", get_next_line(open("text", O_RDONLY)));	
	printf("%s\n", get_next_line(open("text", O_RDONLY)));	
}
