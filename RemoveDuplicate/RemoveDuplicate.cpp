#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> removeDuplicates(const std::vector<int>& arr) {
    std::vector<int> result(arr);
    auto it = std::unique(result.begin(), result.end());
    result.resize(std::distance(result.begin(), it));
    return result;
}

int main() {
    std::vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5};
    std::vector<int> result = removeDuplicates(arr);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
