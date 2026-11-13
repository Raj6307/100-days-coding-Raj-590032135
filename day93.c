#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int rollNo;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student best;
    int found = 0;

    for (int i = 0; i < n; i++) {
        struct Student s;
        scanf("%s %d %d", s.name, &s.rollNo, &s.marks);

        if (!found || s.marks > best.marks) {
            best = s;
            found = 1;
        }
    }

    if (found) {
        printf("Topper: %s (Marks: %d)\n", best.name, best.marks);
    } else {
        printf("No student data entered.\n");
    }

    return 0;
}
