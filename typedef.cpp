#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// or
using text_t = std::string;

int main(){
    // typedef = reserved keyword used to create an additional name
    // (alias) for another data type.
    // New identifier for an existing type
    // Helps with readability and reduces typos

    text_t firstName = "SMA";
    std::string lastName = "bari";

    std:: cout << firstName << " " << lastName << "\n";


    return 0;
}