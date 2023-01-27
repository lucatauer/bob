#include <iostream>

int main()
{
    std::string userInput;
    std::cout << "Hello this is Bob. How can I help you?\n(Type help to see available commands)\n";
    std::cin >> userInput;
    while (userInput != "!end") {
        if (userInput == "!help") {
            std::cout << "Following commands are currently available:\n\n!definitions\n!language\n!calculator\n";
            std::cin >> userInput;
        } else if (userInput == "!calculator") {
            std::cout << "Following operations are currently available:\n\n!negation\n";
            std::cin >> userInput;
        } else if (userInput == "!negation") {
            std::string statement;
            std::cout << "Which statement do you want to negate?\n";
            std::cin >> statement;
        } else {
            std::cout << "Unknown command. Please try again:\n";
            std::cin >> userInput;
        }
    }
    return 0;
}
