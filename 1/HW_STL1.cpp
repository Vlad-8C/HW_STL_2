// Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.
//

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
std::vector<T> noEq(std::vector<T>& v)
{
    for (size_t i = 1; i < v.size(); ++i)
    {
        auto it = std::find(v.begin(), v.begin() + i - 1, v[i]);
        if (it != v.end()) v.erase(std::remove(v.begin() + i, v.end(), *it), v.end());
    }
    return v;
}

int main()
{
    std::vector<int> v1{ 1,1,2,5,6,1,2,4 };
    noEq<int>(v1);
    for (const auto& p : v1)
    {
        std::cout << p << '\t';
    }
    return EXIT_SUCCESS;
}