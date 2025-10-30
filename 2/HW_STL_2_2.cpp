// Шаблонную ф-ию, которая печатает содержимое контейнера. Контейнер может быть любым
//

#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <algorithm>

template <typename T>
void print_container(const T& v)
{
    for (const auto& p : v)
    {
        std::cout << p << '\t';
    }
    std::cout << std::endl;
}

int main()
{
    std::set<std::string> test_set{ "one", "two", "three", "four", "five" };
    print_container(test_set);
    
    std::list<std::string> test_list{ "one", "two", "three", "four", "five" };
    print_container(test_list);

    std::vector<std::string> test_vector{ "one", "two", "three", "four", "five" };
    print_container(test_vector);

    return EXIT_SUCCESS;
}