#include<stdio.h>
int countSetBits(unsigned int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;  // Add the least significant bit to the count
        num >>= 1;        // Right-shift the number by 1
    }
    return count;
}

int main() {
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int totalBits = 0;

    // Iterate over each element in the array
    for (int i = 0; i < 3; i++) {
        totalBits += countSetBits(a[i]);
    }

    printf("The total number of set bits in the given array is %d\n", totalBits);

    return 0;
}