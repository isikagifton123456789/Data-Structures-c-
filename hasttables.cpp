#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    unordered_map<string, int> CarBrand;

    
    CarBrand["Toyota"] = 2023;
    CarBrand["Mazda"] = 2023;
    CarBrand["Benz"] = 2020;

   CarBrand.erase("Toyota");
   CarBrand.insert({"BMW", 2014});
    cout << "Car Brands and their years:" << endl;
    cout << "Toyota: " << CarBrand["Toyota"] << endl;
    cout << "Mazda: " << CarBrand["Mazda"] << endl;
    cout << "Benz: " << CarBrand["Benz"] << endl;
    cout << "BMW: " << CarBrand["BMW"] << endl;
    
    CarBrand.erase("Toyota");

    return 0;
}
