#include <iostream>

using namespace std;

void tower(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }

    tower(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    tower(n - 1, aux, to, from);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    tower(n, 'A', 'B', 'C');

    return 0;
}
