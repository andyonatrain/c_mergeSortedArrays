#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int i = *(const int *)a;
    int j = *(const int *)b;

    if (i < j) return -1;
    if (i > j) return 1;
    return 0;
}

int main(void){
int myNumbersA[] = {1, 4, 6, 8};
int myNumbersB[] = {3, 5, 5, 6, 9, 10};
int mergedNumbers[10];
int w, x, y = 0, z;

for (w = 0; w < 4; w++) {
  mergedNumbers[y++] = myNumbersA[w];
}

for (x = 0; x < 6; x++) {
    mergedNumbers[y++] = myNumbersB[x];
}

qsort(mergedNumbers, 10, sizeof(int), compare);

for (z = 0; z < 10; z++) {
    printf("%d\n", mergedNumbers[z]);
}

return 0;

}
