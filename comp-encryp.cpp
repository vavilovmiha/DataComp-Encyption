#include <iostream>
#include <string>

std::string data;
std::string compressedData;
std::string encryptedData;

void compressData() {
    char currentChar = data[0];
    int currentCharCount = 1;
    for (int i = 1; i < data.length(); i++) {
        if (data[i] == currentChar) {
            currentCharCount++;
        } else {
            compressedData += currentChar;
            compressedData += std::to_string(currentCharCount);
            currentChar = data[i];
            currentCharCount = 1;
        }
    }
    compressedData += currentChar;
    compressedData += std::to_string(currentCharCount);
}

void encryptData() {
    for (int i = 0; i < compressedData.length(); i++) {
        encryptedData += (char)(compressedData[i] ^ key);
    }
}

int main() {
    std::cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter data: \";\n    std::cin >>"}` data;

    compressData();

    int key;
    std::cout `oaicite:{"index":1,"invalid_reason":"Malformed citation << \"Enter encryption key: \";\n    std::cin >>"}` key;

    encryptData();

    std::cout << "Encrypted and compressed data: " << encryptedData << std::endl;

    return 0;
}
