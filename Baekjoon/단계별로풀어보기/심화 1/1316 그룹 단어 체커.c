#include <stdio.h>
#include <string.h>

int is_group_word(char *word) {
    int length = strlen(word);
    for (int i = 0; i < length - 1; i++) {
        if (word[i] != word[i+1]) {
            for (int j = i+1; j < length; j++) {
                if (word[i] == word[j]) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        char word[101];
        scanf("%s", word);
        if (is_group_word(word)) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
