#include <iostream>
#include <string>
using namespace std;

class Spacecraft {
    int x, y, z;
    char dir;
    char lastDir;

public:
    Spacecraft(int startX, int startY, int startZ, char startDir) : x(startX), y(startY), z(startZ), dir(startDir) {
        lastDir = startDir;
    }

    void showPosition() {
        cout << "Current Position: (" << x << ", " << y << ", " << z << ")\n";
        cout << "Facing Direction: " << dir << "\n";
    }
};

int main() {
    cout << "Initialization of Spacecraft class done.\n";
    return 0;
}
