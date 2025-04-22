#include <stdio.h>

int main() {
    char text[] = "the cat sat on the mat";
    char target[] = "cat";
    int foundIndex = -1;

    for (int i = 0; text[i] != '0'; i++) {
        if (text[i] == target[0] && strncmp(&text[i], target, strlen(target)) == 0) {
            foundIndex = i;
            break;
        }
    }

    printf(foundIndex != -1 ? "Слово "%s" найдено на позиции %d\n" : "Слово "%s" не найдено\n", target, foundIndex);
    return 0;
}
