#include <stdlib.h>
#include <stdio.h>
#include "uuid4.h"

int main(void) {
	for (int x = 1; x <= 100000; x++) {
		char buf[UUID4_LEN];

		uuid4_init();
		uuid4_generate(buf);

		char ch;
		int j = 0;

		while (buf[j]) {
			ch = buf[j];
			putchar(toupper(ch));
			j++;
		}
		printf("\n");
	}
	return 0;
}