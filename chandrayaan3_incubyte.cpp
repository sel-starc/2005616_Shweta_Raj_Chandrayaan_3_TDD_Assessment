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

    void move(int step) {
        if (dir == 'U') z += step;
        else if (dir == 'D') z -= step;
        else {
            if (dir == 'N') y += step;
            else if (dir == 'S') y -= step;
            else if (dir == 'E') x += step;
            else if (dir == 'W') x -= step;
            lastDir = dir;  
        }
    }

    void showPosition() {
        cout << "Current Position: (" << x << ", " << y << ", " << z << ")\n";
        cout << "Facing Direction: " << dir << "\n";
    }
};

int main() {
    cout << "done\n";
    return 0;
}
