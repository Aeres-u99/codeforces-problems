#include <stdio.h>
int min(int a, int b, int c) {
    int min = a < b ? (a < c ? a : (b < c ? b : c)) : (b < c ? b : (a < c ? a : c));
    return min;
}
int main() {
    int n_friends, k_bottles, l_mldrink, c_limes, d_slices, p_salt, nl_ml_per_friend, np_grams_of_salt, toasts, i;
    int total_drinks, total_toasts, total_lime, total_salt;
    scanf("%d %d %d %d %d %d %d %d", &n_friends, &k_bottles, &l_mldrink, &c_limes, &d_slices, &p_salt, &nl_ml_per_friend, &np_grams_of_salt);
    total_drinks = k_bottles * l_mldrink;
    total_toasts = total_drinks / nl_ml_per_friend;
    total_lime = c_limes * d_slices;
    total_salt = p_salt / np_grams_of_salt;
    toasts = min(total_toasts, total_lime, total_salt) / n_friends;
    printf("%d", toasts);
    return 0;
}
