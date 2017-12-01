#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	int max = strlen(argv[1]);
	int total = 0;
	int half = (max/2)-1;

	if (argc < 2) { printf("not enough args\n"); }

	for(int counter = 0; counter < max; counter++) {
		if (counter <= half) {
			if (argv[1][counter] == argv[1][half+counter]) {
				char this[2];
				this[0] = argv[1][counter];
				this[1] = 0;
				total += atoi(this); 
				printf("i: %d, total: %d\n", counter, total);
			}
		}

		if (counter > half) {
			if (argv[1][counter] == argv[1][counter-half]) {
				char thisagain[2];
				thisagain[0] = argv[1][counter];
				thisagain[1] = 0;
				total += atoi(thisagain); 
				printf("i: %d, total: %d\n", counter, total);
			}
		}
	}
	printf("total: %d\n", total);
}

