#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int i, n_count = 0, b_count = 0;

    cout << "Enter a string: ";
    cin >> str;

    // Check for invalid characters
    for (i = 0; i < str.length(); i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            cout << str<<" is Rejected" << endl;
            return 0;
        }
    }

    // Check for the number of 'a's and 'b's
    for (i = 0; i < str.length(); i++) {
        if (str[i] == 'a') {
            n_count++;
        } else if (str[i] == 'b') {
            b_count++;
        } else {
            break;
        }
    }

    // Check if the number of 'b's is 4 times the number of 'a's
    if (b_count != 4 * n_count || n_count < 1) {
        cout << str<<" is Rejected" << endl;
    } else {
        cout << str<<" is Accepted" << endl;
    }

    return 0;
}

//output
/*
Enter a string: aba
aba is Rejected

Enter a string: abbbb
abbbb is Accepted
*/