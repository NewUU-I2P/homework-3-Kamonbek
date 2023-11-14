#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string type;
    if (macAddress == "FF:FF:FF:FF:FF:FF") {
        type = "broadcast";
    } else {
        char first = macAddress[0];
        int first_hex;
        if (first >= '0' && first <= '9') {
            first_hex = first - '0';
        } else if (first >= 'A' && first <= 'F') {
            first_hex = first - 'A' + 10;
        } else if (first >= 'a' && first <= 'f') {
            first_hex = first - 'a' + 10;
        }
        if (0 == first_hex % 2) {
            type = "Unicast";
        } else {
            type = "Multicast";
        }
    }
    return type;
}
    // make use of control flow statements
    // return result;

