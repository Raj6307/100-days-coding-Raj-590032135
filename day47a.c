//#include <stdio.h>
#include <string.h>

int check_anagram(char str1[], char str2[]) {
    int count[256] = {0};
    
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    
    // Increment for first string, decrement for second string
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    
    // If any count isn't 0, they aren't anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    
    if (check_anagram(s1, s2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    
    return 0;
}
