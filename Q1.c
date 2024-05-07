#include <iostream>
#include <string>

std::string extract_sentence(std::string sentence, int start, int end) {
    if (start > end) {
        return "";
    } else if (start == end) {
        return std::string(1, sentence[start]);
    } else {
        return sentence[start] + " " + extract_sentence(sentence, start + 1, end);
    }
}

int main() {
    std::string sentence = "This is a sample sentence.";
    int start = 5;
    int end = 10;
    std::string extracted = extract_sentence(sentence, start, end);
    std::cout << extracted << std::endl;
    return 0;
}
 
