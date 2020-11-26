#include <stdio.h>

void Selectionsort(int arr[], int n) {
	int i, j;
	int maxIdx;
	int temp;

	for (i = 0; i < n - 1; i++) {
		maxIdx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[maxIdx]) {
				maxIdx = j;
			}

			temp = arr[i];
			arr[i] = arr[maxIdx];
			arr[maxIdx] = temp;
		}
	}
}
int main() {
	int arr[5] = { 31, 58, 82, 62 ,47 };
	int i;

	Selectionsort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}