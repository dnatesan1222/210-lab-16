// COMSC-210 | Lab 16 | Diksha Tara Natesan
// IDE used: Vim (Terminal)


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Color{
private:
    int red;
    int green;
    int blue;
public:

    //Constructors
    //simple default constructor
    Color()			{red = 0; green = 0; blue = 0;}
    //parameter constructor takes arguments and assigns them to the RGB values
    Color(int r, int g, int b)	{red = r; green = g; blue = b;}
    //partial constructor takes one value to assign to all the RGB values
    Color(int c)		{red = c; green = c; blue = c;}

    // getters: no arguments, returns the stored values of the instance variables
    int getRed()                { return red; }
    int getGreen()              { return green; }
    int getBlue()               { return blue; }

    // setters: take ints as arguments and sets instance variables
    void setRed(int r)          { red = r; }
    void setGreen(int g)        { green = g; }
    void setBlue(int b)         { blue = b; }

    // other methods
    // print() output's the color's RGB values in an organized format
    // arguments: none
    // returns: nothing
    void print(){
        cout << '\n' << setw(17) << "Color Values" << endl;
        cout << setw(15) << "Red Value: " << red << endl;
        cout << setw(15) << "Green Value: " << green << endl;
        cout << setw(15) << "Blue Value: " << blue << '\n' << endl;
    }
};

int main(){
    //first test
    Color lavender;             //create object
    lavender.setRed(204);       //set values
    lavender.setGreen(204);
    lavender.setBlue(255);
    lavender.print();           //output what the object stored

    //test getters
    cout << "Lavender\nRed: " << lavender.getRed() << endl;
    cout << "Blue: " << lavender.getBlue() << endl;
    cout << "Green: " << lavender.getGreen() << endl;

    Color skyBlue;
    skyBlue.setRed(153);
    skyBlue.setGreen(204);
    skyBlue.setBlue(255);
    skyBlue.print();

    Color magenta;
    magenta.setRed(204);
    magenta.setGreen(0);
    magenta.setBlue(102);
    magenta.print();

    Color turquoise;
    turquoise.setRed(0);
    turquoise.setGreen(102);
    turquoise.setBlue(102);
    turquoise.print();

    Color pastelYellow;
    pastelYellow.setRed(255);
    pastelYellow.setGreen(255);
    pastelYellow.setBlue(153);
    pastelYellow.print();

    Color salmon;
    salmon.setRed(255);
    salmon.setGreen(153);
    salmon.setBlue(153);
    salmon.print();

}
