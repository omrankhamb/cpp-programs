#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    cout << "Accessing element at index 10..." << endl;
    cout << v.at(10);  // This will throw std::out_of_range
    cout << "This line will never be executed." << endl;
    return 0;
}
