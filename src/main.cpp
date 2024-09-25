#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Short min: " << numeric_limits<short>::min() << "\n";
    cout << "Short max: " << numeric_limits<short>::max() << "\n";
    cout << "Unsigned short max: " << numeric_limits<unsigned short>::max() << "\n\n";

    cout << "Int min: " << numeric_limits<int>::min() << "\n";
    cout << "Int max: " << numeric_limits<int>::max() << "\n";
    cout << "Unsigned int max: " << numeric_limits<unsigned int>::max() << "\n\n";

    cout << "Long min: " << numeric_limits<long>::min() << "\n";
    cout << "Long max: " << numeric_limits<long>::max() << "\n";
    cout << "Unsigned long max: " << numeric_limits<unsigned long>::max() << "\n\n";

    cout << "Long long min: " << numeric_limits<long long>::min() << "\n";
    cout << "Long long max: " << numeric_limits<long long>::max() << "\n";
    cout << "Unsigned long long max: " << numeric_limits<unsigned long long>::max() << "\n\n";

    cout << "Float min: " << numeric_limits<float>::min() << "\n";
    cout << "Float max: " << numeric_limits<float>::max() << "\n\n";

    cout << "Double min: " << numeric_limits<double>::min() << "\n";
    cout << "Double max: " << numeric_limits<double>::max() << "\n\n";

    cout << "Long double min: " << numeric_limits<long double>::min() << "\n";
    cout << "Long double max: " << numeric_limits<long double>::max() << "\n\n";

    return 0;
}
