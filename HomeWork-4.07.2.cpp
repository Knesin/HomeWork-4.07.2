#include <iostream>
#include <string>
#include <set>
#include <list>
#include <vector>

template<class T>
void print_container(const T& begin, const T& end) {
    for (auto i = begin; i != end; i++) {
        std::cout << *i << "  ";
    }
}

int main()
{
    std::cout << "[SET]: ";
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set.cbegin(), test_set.cend()); // four one three two. помните почему такой порядок? :)
    std::cout << std::endl << "[LIST]: ";
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list.cbegin(), test_list.cend()); // one  two  three  four
    std::cout << std::endl << "[VECTOR]: ";
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector.cbegin(), test_vector.cend()); // one  two  three  four
}