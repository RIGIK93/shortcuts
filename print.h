#include <iostream>
#include <vector>

void print() {
    std::cout << std::endl;
}

// template <typename T, size_t N, typename ... Strings>
// void print(const T (&arr)[N], const Strings&... rest);

template <typename T, typename... Strings>
void print(const std::vector<T> v, const Strings &...rest);

template<typename First, typename ... Strings>
void print(First arg, const Strings&... rest) {
    std::cout << arg << " ";
    print(rest...);
}

// template <typename T, size_t N, typename ... Strings>
// void print(const T (&arr)[N], const Strings&... rest) {
//     std::cout << "[ ";
//     for (auto i : arr) {
//         std::cout << i << ", ";
//     }
//     std::cout << "] ";
//     print(rest...);
// }

template <typename T, typename ... Strings>
void print(const std::vector<T> v, const Strings&... rest) {
    std::cout << "[";
    size_t vsize = v.size();
    for (size_t i = 0; i < vsize; i++) {
        std::cout << v[i];
        if (i < vsize - 1)
            std::cout << ", ";
    }
    std::cout << "] ";
    print(rest...);
}