#include "decodage.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	conversionFichier("tests/in4.txt", "hexified/out4.txt");
	// printf("OPERANDE:%s\n",operande("SW $3,10($0)",1));
	// printf("%s\n",decodeInstruction("ADDI $8,$0,1"));
	return 0;
}
