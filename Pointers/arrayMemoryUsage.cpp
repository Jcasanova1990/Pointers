#include <iostream>
using namespace std;

int main() {

char names[3][6] = {
    "Alan", "Bob", "joe"
};

for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
    cout << names[i] << endl;
}

return 0;

}