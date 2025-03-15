#include <iostream>
#include <vector>

// Function to swap elements between a vector and an array
// vec: Reference to the vector (modified in-place)
// arr: Pointer to the array (elements will be swapped)
void swapvec(std::vector<int>& vec, int* arr) {
    // Iterate through each element using vector's size
    for (size_t i = 0; i < vec.size(); ++i) {
        // Manual swap without using std::swap
        int temp = vec[i];     // Store vector value temporarily
        vec[i] = arr[i];       // Assign array value to vector
        arr[i] = temp;         // Assign stored vector value to array
    }
}

int main() {
    // Initialize vector and array
    std::vector<int> a = {1, 2, 3, 4};
    int b[] = {2, 4, 6, 8};
    
    // Perform swap
    swapvec(a, b);
    
    // Display results
    std::cout << "Vector after swap: ";
    for (int num : a) {
        std::cout << num;
    }
    
    std::cout << "\nArray after swap: ";
    for (int i = 0; i < 4; ++i) {
        std::cout << b[i];
    }
    
    return 0;
}
