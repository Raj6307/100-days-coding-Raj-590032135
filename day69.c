#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int value;
	int occupied;
} Entry;

static uint32_t hash_int(int value) {
	uint32_t hash = (uint32_t)value;
	hash ^= hash >> 16;
	hash *= UINT32_C(0x7feb352d);
	hash ^= hash >> 15;
	hash *= UINT32_C(0x846ca68b);
	hash ^= hash >> 16;
	return hash;
}

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n < 0) {
		return 1;
	}

	size_t max_entries = SIZE_MAX / sizeof(Entry);
	if (max_entries < 1 || (size_t)n > (max_entries - 1) / 2) {
		return 1;
	}

	size_t capacity = (size_t)n * 2 + 1;
	Entry *seen = calloc(capacity, sizeof(*seen));
	if (seen == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		int value;
		if (scanf("%d", &value) != 1) {
			free(seen);
			return 1;
		}

		size_t index = hash_int(value) % capacity;
		while (seen[index].occupied) {
			if (seen[index].value == value) {
				printf("%d\n", value);
				free(seen);
				return 0;
			}
			index = (index + 1) % capacity;
		}

		seen[index].value = value;
		seen[index].occupied = 1;
	}

	printf("No repeated element found\n");
	free(seen);
	return 0;
}

