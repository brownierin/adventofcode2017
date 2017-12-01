#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_fuction(int max, char *input) {
	int total = 0;
	printf("max: %d, input: %s\n", max, input);

	for(int counter = 0; counter < max; counter++) {
		if (input[counter] == input[counter+1]) {
			char this[2];
			this[0] = input[counter];
			this[1] = 0;
			printf("input[counter] typecasting: %d\n", atoi(this));
			total += atoi(this); 
			printf("i: %d, total: %d\n", counter, total);
		}
		
	}
	printf("input[0]: %c, input[max]: %c\n", input[0], input[max-1]);
	if (input[0] == input[max-1]) {
		char thisagain[2];
		thisagain[0] = input[0];
		thisagain[1] = 0;
		total += atoi(thisagain);
	}
    return total;
}

int main (int argc, char *argv[]) {
	int max;
	char *input;
	int total;

	if (argc < 2) { printf("not enough args asshole\n"); }

	max = strlen(argv[1]);
	total = count_fuction(max, argv[1]);
	printf("total: %d\n", total);
}

