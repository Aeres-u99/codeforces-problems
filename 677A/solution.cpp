#include <iostream>
#include <string>
int main() {
    int n, h, width = 0;
    std::string line;
    int a[1000];
    std::cin >> n >> h;
    a[n];
    std::cin >> std::ws;
    std::getline (std::cin, line);
    line += " ";
    int start = 0;
    int end = line.find(" ");
    int i = 0;
    while (end != -1) {
        a[i] = std::stoi((line.substr(start, end - start)));
        start = end + 1;
        end = line.find(" ", start);
        i++;
    }
    for (i = 0; i < n; i++) {
        if (a[i] <= h) {
            width += 1;
        } else {
            width += 2;
        }
    }
    std::cout << width;
    return 0;
}
