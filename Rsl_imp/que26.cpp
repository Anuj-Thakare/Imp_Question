#include <iostream>
using namespace std;

int main() {
    string st;
    cout << "Enter the string: ";
    getline(cin, st);

    int spaceCount = 0;
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == ' ') {
            spaceCount++;
        }
    }

    int newLength = st.size() + spaceCount * 2;

    st.resize(newLength);

    for (int i = st.size() - 1, j = st.size() - 1 - spaceCount * 2; i >= 0; i--, j--) {
        if (st[j] == ' ') {
            st[i] = '0';
            st[i - 1] = '2';
            st[i - 2] = '%';
            i -= 2;
        } else {
            st[i] = st[j];
        }
    }

    cout << st;

    return 0;
}
