/* Searches a sorted array for a specific element */

#include <stdio.h>

int main() {
	const int size = 10;
	int a[size], i, key, low, mid, high;

	printf("Enter %d elements in ascending order:\n", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}

	printf("Enter key:\n");
	scanf("%d", &key);

	low = 0;
	high = size - 1;

	while (low <= high) {
		mid = (low + high)/2;
		if (key == a[mid]) {
			printf("Key was found!");
			getchar();
			getchar();
			return 0;
		}
		if (key < a[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	printf("Key was not found.");

	return 0;
}