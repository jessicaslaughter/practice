/* Combines two sorted arrays A and B into a single array C */

#include <stdio.h>

int main() {
	const int size = 10, cSize = 20;
	int a[size], b[size], c[cSize], i, aCnt, bCnt;

	printf("Enter %d elements in ascending order:\n", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter another %d elements in ascending order:\n", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &b[i]);
	}

	aCnt = bCnt = 0;
	for (i = 0; i < cSize; i++) {
		if (aCnt > size - 1) {
			c[i] = b[bCnt];
		}
		else if (bCnt > size - 1) {
			c[i] = a[aCnt];
		}
		else if (a[aCnt] <= b[bCnt]) {
			c[i] = a[aCnt];
			aCnt++;
		}
		else {
			c[i] = b[bCnt];
			bCnt++;
		}
	}

	printf("Combined list:\n");
	for (i = 0; i < cSize; i++) {
		printf("%d\n", c[i]);
	}

	return 0;
}