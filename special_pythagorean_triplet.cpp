#include "special_pythagorean_triplet.h"

#include <cmath>

// answer = 31875000
int special_pythagorean_triplet() {

    for (int i = 1; i < 334; ++i) {

        int j = i + 1;
        int k = 1000 - i - j;

        while (j < k - 1) {

            if ((pow(i, 2) + pow(j, 2)) == pow(k, 2)) {
                return i * j * k;
            }

            ++j;
            --k;
        }
    }
}