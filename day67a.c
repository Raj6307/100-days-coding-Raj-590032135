#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m, n;

	if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0) {
		return 1;
	}

	int *nums1 = malloc((size_t)m * sizeof(*nums1));
	int *nums2 = malloc((size_t)n * sizeof(*nums2));
	int *merged = malloc((size_t)(m + n) * sizeof(*merged));

	if ((m > 0 && nums1 == NULL) || (n > 0 && nums2 == NULL) ||
		(m + n > 0 && merged == NULL)) {
		free(nums1);
		free(nums2);
		free(merged);
		return 1;
	}

	for (int i = 0; i < m; i++) {
		if (scanf("%d", &nums1[i]) != 1) {
			free(nums1);
			free(nums2);
			free(merged);
			return 1;
		}
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums2[i]) != 1) {
			free(nums1);
			free(nums2);
			free(merged);
			return 1;
		}
	}

	int i = 0, j = 0, k = 0;
	while (i < m && j < n) {
		if (nums1[i] <= nums2[j]) {
			merged[k++] = nums1[i++];
		} else {
			merged[k++] = nums2[j++];
		}
	}

	while (i < m) {
		merged[k++] = nums1[i++];
	}
	while (j < n) {
		merged[k++] = nums2[j++];
	}

	for (int index = 0; index < m + n; index++) {
		printf("%d", merged[index]);
		if (index < m + n - 1) {
			printf(" ");
		}
	}
	printf("\n");

	free(nums1);
	free(nums2);
	free(merged);
	return 0;
}
