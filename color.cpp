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
    Color black;		//create object and test default parameter
    black.print();		//output what the object stored

    Color skyBlue(153, 204, 255);	//test parameter constructor
    skyBlue.print();

    Color magenta(204, 0, 102);
    magenta.print();

    Color white(255);		//test partial constructor

    Color turquoise(0, 102, 102);
    turquoise.print();

    Color lavender;
    lavender.print();
    lavender.setRed(204);       //set values
    lavender.setGreen(204);
    lavender.setBlue(255);
    lavender.print();

    Color gray(150);
    gray.print();

    Color salmon(255, 153, 153);
    salmon.print();

}
