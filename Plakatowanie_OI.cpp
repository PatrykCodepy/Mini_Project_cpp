#include <iostream>
#include <cstdio>

int main(void){
    std::ios::sync_with_stdio(false);
    std::size_t n, h, i = 0, p = 0, szerokosc;
    std::cin >> n;
    std::size_t* S = new std::size_t[n];
    std::cin >> szerokosc >> S[0];

    for (int a = 1; a < n; a++)
    {
        std::cin >> szerokosc >> h;
        while (h < S[i])
        {
            p++; 
            i--;  
            if (i == -1) S[++i] = h;
        }
        if (h > S[i])  
            S[++i] = h;
    }

    p += i + 1;   
    std::cout << p;

    delete[] S;

    return 0;
}