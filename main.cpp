#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>

int main() {
    // Using vector (dynamic array)
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);  // Adding an element to the vector

    // Using an iterator to print the vector elements
    std::cout << "Vector elements using iterator: ";
    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end()) {
        std::cout << *it << " ";  // Dereferencing iterator to access element
        ++it;
    }
    std::cout << std::endl;

    // Using list (doubly linked list, easier travel in both directions)
    std::list<int> lst = {10, 20, 30, 40};
    lst.push_front(5);   // Add element at the front
    lst.push_back(50);   // Add element at the back

    // Using an iterator to print the list elements
    std::cout << "List elements using iterator: ";
    std::list<int>::iterator lit = lst.begin();
    while (lit != lst.end()) {
        std::cout << *lit << " ";
        ++lit;
    }
    std::cout << std::endl;

    // Using map (key-value pairs)
    std::map<std::string, int> mp;
    mp["apple"] = 10;
    mp["banana"] = 20;
    mp["cherry"] = 30;

    // Using an iterator to print the map elements
    std::cout << "Map elements using iterator: " << std::endl;
    std::map<std::string, int>::iterator mit = mp.begin();
    while (mit != mp.end()) {
        std::cout << mit->first << ": " << mit->second << std::endl;
        ++mit;
    }

    // Using set (unique elements, no duplicates)
    std::set<int> st = {5, 10, 15, 20, 25};
    st.insert(30);  // Add element to the set

    // Using an iterator to print the set elements
    std::cout << "Set elements using iterator: ";
    std::set<int>::iterator sit = st.begin();
    while (sit != st.end()) {
        std::cout << *sit << " ";
        ++sit;
    }
    std::cout << std::endl;

    // Using algorithm (e.g., sort)
    std::vector<int> sortVec = {40, 10, 50, 30, 20};
    std::sort(sortVec.begin(), sortVec.end());  // Sorting the vector

    // Using iterator to print the sorted vector elements
    std::cout << "Sorted vector using iterator: ";
    std::vector<int>::iterator sortIt = sortVec.begin();
    while (sortIt != sortVec.end()) {
        std::cout << *sortIt << " ";
        ++sortIt;
    }
    std::cout << std::endl;

    // Using find algorithm with vector and iterators
    std::vector<int>::iterator findIt = std::find(vec.begin(), vec.end(), 3);
    if (findIt != vec.end()) {
        std::cout << "Found 3 in vector using iterator!" << std::endl;
    } else {
        std::cout << "3 not found in vector." << std::endl;
    }

    return 0;
}