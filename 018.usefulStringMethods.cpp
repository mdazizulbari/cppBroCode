#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";

    // length()
    std::cout << "Length of str: " << str.length() << std::endl;

    // empty()
    if (!str.empty()) {
        std::cout << "String is not empty" << std::endl;
    }

    // append()
    str.append(" World");
    std::cout << "After append: " << str << std::endl;

    // clear()
    std::string temp = "Temporary";
    temp.clear();
    std::cout << "After clear(), temp is empty? " << temp.empty() << std::endl;

    // at()
    std::cout << "Character at index 1: " << str.at(1) << std::endl;

    // insert()
    str.insert(5, ", C++");
    std::cout << "After insert: " << str << std::endl;

    // find()
    size_t pos = str.find("World");
    if (pos != std::string::npos) {
        std::cout << "\"World\" found at index: " << pos << std::endl;
    }

    // erase()
    str.erase(5, 5); // remove ", C++"
    std::cout << "After erase: " << str << std::endl;

    // substr()
    std::string sub = str.substr(0, 5);
    std::cout << "Substring (0-5): " << sub << std::endl;

    // replace()
    str.replace(6, 5, "Universe");
    std::cout << "After replace: " << str << std::endl;

    // compare()
    std::string a = "apple";
    std::string b = "banana";
    if (a.compare(b) < 0) {
        std::cout << "apple comes before banana" << std::endl;
    }

    return 0;
}
