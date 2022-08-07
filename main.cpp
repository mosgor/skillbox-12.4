#include <iostream>

int main() {
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
    int min = numbers[0], sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += numbers[i];
        if (numbers[i] < min) min = numbers[i];
    }
    int without_recurs = min * 14 + (1 + 13) / 2 * 13;
    std::cout << "Recurring number is: " << sum - without_recurs;
    return 0;
}