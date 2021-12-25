#include "../utilities.hpp"
#include <iostream>

int main() {
    int arr[2000];
    FileReader fileReader("../input/input_challenge_1-1.txt", arr);
    fileReader.readFile();

    std::cout << "Advent of Code | Challenge 1-1" << endl;

    unsigned int counter = 0;
    int previous = -1;

    for (int i : arr) {
        if (previous == -1) {
            previous = i;
        } else {
            if (i > previous) {
                counter++;
                previous = i;
            } else {
                previous = i;
                continue;
            }
        }
    }
    printf("> Result is %d, exiting...", counter);
    return 0;
}