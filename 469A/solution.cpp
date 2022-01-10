#include <iostream>
#include <string>
#include <cstring>

int main() {
    int i, j;
    int count;
    std::cin >> count;
    std::cin >> std::ws; // clear out extra \n in terminal
    int comparator[count];
    std::string p, a, dump;
    std::getline (std::cin, p);
    std::cin >> std::ws;
    std::getline (std::cin, a);
    std::string r1,r2;
    int length = p.length();
    int l2 = a.length();
    p += " ";
    a += " ";
    int _t[length];
    int __t[l2];
    int start = 0;
    int end = p.find(" ");
    i = 0;
    // std::cout << "Start: " << start << "End: " << end << std::endl;
    while (end != -1) {
        _t[i] = std::stoi((p.substr(start, end - start)));
        start = end + 1;
        end = p.find(" ", start);
        i++;
    }
    length = i;
    start = 0;
    end = a.find(" ");
    i = 0;
    while (end != -1) {
        __t[i] = std::stoi((a.substr(start, end - start)));
        start = end + 1;
        end = a.find(" ", start);
        i++;
    }
    l2 = i;
/*
    for (i = 0; i < length; i++) {
        std::cout << "P: " << _t[i] << std::endl;
    }
    for (j = 0; j < l2; j++) {
        std::cout << "A: " << __t[j] << std::endl;
    }
*/

    for (i = 0; i < count; i++) {
        comparator[i] = count - i;
    }
    
    for (i = 0; i < count; i++) {
        for (j = 1; j < length; j++) {
//            std::cout << comparator[i] << " : " << _t[j] << std::endl;
            if (_t[j] == comparator[i]) {
                comparator[i] = -1;
            }
        }
    }
    for (i = 0; i < count; i++) {
        for (j = 1; j < l2; j++) {
//            std::cout << comparator[i] << " : " << _t[j] << std::endl;
            if (__t[j] == comparator[i]) {
                comparator[i] = -1;
            }
        }
    }   
    for (i = 0; i < count; i++) {
        if (comparator[i] == -1) {
            continue;
        } else {
            std::cout << "Oh, my keyboard!";
            exit(0);
        }
    }
    std::cout << "I become the guy.";
    return 0;
}
