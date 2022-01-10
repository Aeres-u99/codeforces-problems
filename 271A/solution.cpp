#include <iostream>


bool checker(int *arr, int size = 4) {
    int i,j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (arr[i] == arr[j] && i != j){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int input;
    int _t[4],i;
    std::cin >> input;
    int copy = input;
    bool result = 0;
    while (!result) {
    copy = input+1;
    for (i = 0; i < 4; i++) {
        _t[i] = copy % 10;
//        std::cout << _t[i] << std::endl;
        copy = copy / 10;
    }
    result = checker(_t);
    input++;
    }
    std::cout << input;
    return 0;
}
