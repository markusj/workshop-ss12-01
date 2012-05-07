#include <string>
#include <iostream>

using namespace std;

int main()
{
    string nameReversed = "sukraM";

    for (size_t i = 0; i < nameReversed.length(); i++) {
        cout << nameReversed.at(nameReversed.length() - i - 1);
    }

    cout << endl;

    for (string::reverse_iterator iter = nameReversed.rbegin(); iter < nameReversed.rend(); iter++) {
        cout << *iter;
    }

	cout << endl;

	cout << string(nameReversed.rbegin(), nameReversed.rend()) << endl;

	return 0;
}
