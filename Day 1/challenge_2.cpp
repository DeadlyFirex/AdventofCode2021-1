#include "../utilities.hpp"
#include <iostream>

int main() {
    int arr[2000];
    FileReader fileReader("../input/input_challenge_1-1.txt", arr);
    fileReader.readFile();

    std::cout << "Advent of Code | Challenge 1-2" << endl;

    unsigned int counter = 0;

    int previousOne = -1;
    int previousTwo = -1;
    int previousThree = -1;

    for (int i : arr) {
        if (previousOne == -1) {
            previousOne = i;
            continue;
        } else if (previousTwo == -1) {
            previousTwo = i;
            continue;
        } else if (previousThree == -1) {
            previousThree = i;
            continue;
        } else {

        }
    }
    printf("> Result is %d, exiting...", counter);
    return 0;
}