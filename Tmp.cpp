#include <bits/stdc++.h>
using namespace std;
template<typename T>
inline T read() {
    T x = 0;
    bool f = false;
    char ch = getchar();
    for (; !isdigit(ch); ch = getchar()) f ^= ch == '-';
    for (; isdigit(ch); ch = getchar()) x = (x << 1) + (x << 3) + (ch ^ 48);
    return f ? -x : x;
}
int main() {
    
    return 0;
}