
#include <iostream>
#include <vector>
std::vector<int> divideLargeNumber(const std::vector<int>& largeNumber, int divisor) {
    std::vector<int> result;
    int carry = 0;
    for (int i = 0; i < largeNumber.size(); ++i) {
        int currentDigit = (carry * 10 + largeNumber[i]) / divisor;
        result.push_back(currentDigit);
        carry = (carry * 10 + largeNumber[i]) % divisor;
    }
    while (result.size() > 1 && result.back() == 0) {
        result.pop_back();
    }
    return result;
}
int main() {
    int A;
    std::cout << "Enter a number A: ";
    std::cin >> A;
    std::vector<int> largeNumber(100, 9);  // Initialize with 9 (100-digit number)
    std::vector<int> result = divideLargeNumber(largeNumber, A);
    std::cout << "Result of dividing a 100-digit number by " << A << ":\n";
    for (int digit : result) {
        std::cout << digit;
    }
    std::cout << std::endl;

    return 0;
}
