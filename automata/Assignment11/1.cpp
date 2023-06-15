#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int i, j, n_count = 0, b_count = 0, c_count = 0;

    cout << "Enter a string consist of 'a' 'b' and 'c' only : ";
    cin >> str;

    // Check for invalid characters
    for (i = 0; i < str.length(); i++) {
        if (str[i] != 'a' && str[i] != 'b' && str[i] != 'c') {
            cout <<str<< " is Rejected" << endl;
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
    if (b_count != 4 * n_count) {
        cout <<str<< " is Rejected" << endl;
        return 0;
    }

    // Check for the number of 'c's
    for (j = i; j < str.length(); j++) {
        if (str[j] == 'c') {
            c_count++;
        } else {
            cout <<str<< " is Rejected" << endl;
            return 0;
        }
    }

    if (n_count >= 1 && c_count >= 1) {
        cout <<str<< " is Accepted" << endl;
    } else {
        cout <<str<< " is Rejected" << endl;
    }

    return 0;
}

//output
/*
Enter a string consist of 'a' 'b' and 'c' only : abbbbc
abbbbc is Accepted

Enter a string consist of 'a' 'b' and 'c' only : abbbb
abbbb is Rejected
*/