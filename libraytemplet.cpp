#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    // Sorting the vector
    std::sort(numbers.begin(), numbers.end());

    // Displaying the sorted vector
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}

// std::vector: Dynamic array.
// std::sort: Sorting algorithm from the STL.