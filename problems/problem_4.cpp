#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string type;
    std::stringstream s(macAddress);
    std::string firstOctet;
    std::getline(s, firstOctet, ':');
    int firstDecimal = std::stoi(firstOctet, 0, 16);
    if (firstDecimal % 2 == 0) {
        type="Unicast";
    } else if (firstDecimal == 255) {
        type="Broadcast";
    } else {
        type="Multicast";
    }
    return type;
}

