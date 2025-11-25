#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ProductCodes = {2840, 2850, 2860, 2870};
    cout << "Original product Codes:";
    for (int x : ProductCodes) cout << x << "";
    cout << endl;

    int value = 2868;
    list<int>::iterator it;

    for (it = ProductCodes.begin(); it != ProductCodes.end(); ++it) {
        if (*it > value) {
            ProductCodes.insert(it, value);
            break;
        }

        if (it == ProductCodes.end()) {
            ProductCodes.push_back(value);
        }
    }

    cout << "ProductCodes after inserting new Value " << value << ": ";
    for (int n : ProductCodes) cout << n << " ";
    cout << endl;

    return 0;
}
