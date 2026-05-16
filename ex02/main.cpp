#include "Array.hpp"
#include <iostream>

int main() {
    Array<int> arr(3);
    std::cout << "Initial value at index 0: " << arr[0] << std::endl;

    // 2. Modify original and make a copy
    arr[0] = 42;
    Array<int> copy(arr);
    
    // Change the copy to prove they are totally separate in memory
    copy[0] = 99; 
    std::cout << "Original index 0: " << arr[0] << " (Still 42!)" << std::endl;
    std::cout << "Copy index 0:     " << copy[0] << " (Is 99!)" << std::endl;

    // 3. Test your out-of-bounds exception
    try {
        std::cout << arr[5] << std::endl; // Index 5 doesn't exist!
    } 
    catch (const std::exception& e) {
        std::cout << "Caught error: " << e.what() << std::endl;
    }

    return 0;
}
