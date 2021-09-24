#include <iostream>

int main()
{
    std::cout << "  /$$$$$$  /$$                       /$$$$$$$                                /$$\n";
    std::cout << " /$$__  $$| $$                      | $$__  $$                              | $$\n";
    std::cout << "| $$  \\__/| $$   /$$ /$$   /$$      | $$  \\ $$  /$$$$$$   /$$$$$$   /$$$$$$ | $$   /$$\n";
    std::cout << "|  $$$$$$ | $$  /$$/| $$  | $$      | $$$$$$$  /$$__  $$ /$$__  $$ |____  $$| $$  /$$/\n";
    std::cout << " \\____  $$| $$$$$$/ | $$  | $$      | $$__  $$| $$  \\__/| $$$$$$$$  /$$$$$$$| $$$$$$/\n";
    std::cout << " /$$  \\ $$| $$_  $$ | $$  | $$      | $$  \\ $$| $$      | $$_____/ /$$__  $$| $$_  $$\n";
    std::cout << "|  $$$$$$/| $$ \\  $$|  $$$$$$$      | $$$$$$$/| $$      |  $$$$$$$|  $$$$$$$| $$ \\  $$\n";
    std::cout << " \\______/ |__/  \\__/ \\____  $$      |_______/ |__/       \\_______/ \\_______/|__/  \\__/\n";
    std::cout << "                     /$$  | $$\n";
    std::cout << "                    |  $$$$$$/\n";
    std::cout << "                     \\______/\n";
    std::cout << "\n";
    std::cout << "This is an application designed to \"bruteforce\" a Skyward login.\nHowever, it will eventually lock out an account and force the user to contact tech support, locking them out of their account and putting a hitch in their plans, so there's that.";
    std::cout << "\n\n";

    // Initialize variables
    int username;
    int password;
    char answer;

    // Grab user input
    std::cout << "Please enter a user I.D (must be a number): ";
    std::cin >> username;
    std::cout << "Username entered is " << username << "\n";
    std::cout << "Are you SURE you want to continue with this.\nThis is extremely risky and it is HIGHLY recommended you use a VPN or some other proxy as this is easily traceable.\nARE YOU ABSOULTELY SURE (Y/n) ";
    std::cin >> answer;
    if (answer == 'n') {
        exit(0);
    }
    std::cout << "Beginning to send requests...";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
