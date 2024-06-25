#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::map<int, int> frequencyMap;

    // Populate the map with frequencies (example data)
    frequencyMap[1] = 3;
    frequencyMap[2] = 1;
    frequencyMap[3] = 5;

    // Assume arr[i] is, for example, equal to 2
    int i = 0;
    std::sort(frequencyMap[arr[i]], frequencyMap[arr[i]].end());

    // Display the sorted frequencies
    for (const auto& pair : frequencyMap) {
        std::cout << "Element: " << pair.first << ", Frequency: " << pair.second << std::endl;
    }

    return 0;
}
