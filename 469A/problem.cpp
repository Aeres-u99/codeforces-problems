#include <iostream>
#include <string>
#include <cstring>
std::string tokeniz(std::string s, std::string del = " ")
{
    int start = 0;
    int end = s.find(del);
    s += del;  // This is to fix the -1 at the end and skipping of final element
    std::string output = "";
    while (end != -1) {
        output += s.substr(start, end - start);
        start = end + del.size();
        end = s.find(del, start);
    }
    return output;
}

int main() {
    int i, j, k;
    int count;
    std::cin >> count;
    std::cin >> std::ws; // clear out extra \n in terminal
    char comparator[count];
    std::string p, a, dump;
    std::getline (std::cin, p);
    std::cin >> std::ws;
    std::getline (std::cin, a);
    std::string out = tokeniz(p, " ");
    out+= tokeniz(a, " ");
    int n = out.length();
    char char_array[n+1];
    std::strcpy(char_array, out.c_str());
    for (i = 0; i < count; i++) {
        comparator[i] = (count - i)+'0';
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < count; j++) {
            if (comparator[j] == char_array[i]) {
                comparator[j] = 'A';
            }
        }
    }

    for (i = 0; i < count; i++){
        if (comparator[i] == 'A') {
            continue;
        } else {
            std::cout << "Oh, my keyboard!";
            exit(0);
        }
    }
    std::cout << "I become the guy.";

    return 0;
}
