#include <iostream>
#include <string>

int main() {
    std::string sentence, word;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Enter a word to search for: ";
    std::cin >> word;
    size_t found = sentence.find(word);
    if (found != std::string::npos) {
        // Word is found, print the index of the matching substring
        std::cout << "Match found at index: " << found << std::endl;
    } else {
        std::cout << "No match." << std::endl;
    }

    return 0;
}
