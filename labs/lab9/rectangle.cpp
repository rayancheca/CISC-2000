/*
              Name: Rayan Checa
        Assignment: rectangle
	      Due Date: 31/03/2023	       
              File: rectangle.cpp
*/

#include <iostream>
using namespace std;

// Rectangle class represents a rectangle with height and width.
class rectangle {
public:
    rectangle(); // default constructor initializes height and width to 1.
    void add(int addHeight, int addWidth);
    void set(int h, int w);
    void draw() const;
    int getWidth() const;
    int getHeight() const;
    bool isSquare() const;

private:
    int width, height;
};

// Default constructor initializes height and width to 1.
rectangle::rectangle() {
    height = 1;
    width = 1;
}

// Adds the given values to height and width.
void rectangle::add(int addHeight, int addWidth) {
    height += addHeight;
    width += addWidth;
}

// Sets the height and width to the given values.
void rectangle::set(int h, int w) {
    height = h;
    width = w;
}

// Draws the rectangle using '#' characters.
void rectangle::draw() const {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << '#';
        }
        cout << endl;
    }
}

// Returns the width of the rectangle.
int rectangle::getWidth() const {
    return width;
}

// Returns the height of the rectangle.
int rectangle::getHeight() const {
    return height;
}

// Returns true if the rectangle is a square, false otherwise.
bool rectangle::isSquare() const {
    return height == width;
}

int main() {
    rectangle r1, r2;

    // Draw the unit rectangle (1x1) using r1.
    cout << "unit rectangle" << endl;
    r1.draw();

    // Set r1 dimensions to 4x3 and draw it.
    r1.set(4, 3);
    cout << "r1 is " << r1.getHeight() << " x " << r1.getWidth() << endl;
    r1.draw();

    // Copy r1 dimensions to r2, add 3 to height and 4 to width, and draw r2.
    r2 = r1;
    r2.add(3, 4);
    cout << "r2 is " << r2.getHeight() << " x " << r2.getWidth() << endl;
    r2.draw();

    // Check if r2 is a square and display the result.
    if (r2.isSquare())
        cout << "r2 is a square" << endl;
    else
        cout << "r2 is not a square" << endl;

    return 0;
}
