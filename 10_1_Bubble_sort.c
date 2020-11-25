#include <stdio.h>

void Bubblesort(int arr[], int n) {
	int i, j;
	int temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < (n - i) - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			} 
		}
	}
}
int main() {
	int arr[5] = { 15, 26, 48, 21, 1 };
	int i;
	Bubblesort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}