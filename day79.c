#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if(file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while(fscanf(file, "%d", &num) == 1) {  // Read integers from file
        sum += num;
        count++;
    }

    fclose(file);

    if(count == 0) {
        printf("No integers found in the file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2lf\n", average);
    }

    return 0;
}