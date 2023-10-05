# Change Terminal text / output in C++ 

## Steps :
1. Download the `color_arc.hpp` Header File from  [Here](https://github.com/ArcShahi/arc_color/blob/main/C%2B%2B/color_arc.hpp) 
Click **Ctrl + Shift + S** or Look to the Top right corner,  click on the 3 dots and You'll get a button to download.

2.  Add that Header file to your IDE / Code Editor Directory.
3.  Include that Header File in your code using `#include "color_arc.hpp"`
4.  Done >_<

## Syntax to use it in your code .


> [!IMPORTANT]
> Follow the Syntax Properly.


### To change text color only


```cpp

std::cout << Color::red << "Red Text\n";
std::cout << Color::yellow << " Yellow Text\n";
std::cout << Color::cyan << "Cyan Text\n\n\n"<<RESET;


```
Type `Colors::color_name` to change text color 

---

### To change Backgrouond Color only

```cpp

std::cout << BG::red << "Red Background\n";
std::cout << BG::violet << "Violet Background\n";
std::cout << BG::green << "Green Background\n" << RESET;

```
Type `BG::color_name` to change Background Colors

### To Change Both Text Color and Background

```cpp

std::cout << Color::yellow << BG::red << "Yellow Text on Red Background\n";
std::cout << Color::black << BG::white << "Black Text on White Background\n" << RESET;

```
Type `Color::color_name << BG::color_name` to Change Text and Background Color.



> [!NOTE]
>type `RESET` every time you want to reset the Previous Terminal Color foramt.


## Color Table

| Color       | Full Name             |
|-------------|-----------------------|
| red         | Red                   |
| crimson     | Crimson red           |
| rasp        | Raspberry Red         |
| pink        | Pink                  |
| hot_pink    |  More Pink            |
| yellow      | Yellow                |
| Lyellow     | Light Yellow          |
| orange      | Orange                |
| blue        | Blue                  |
| sky_blue    | Sky Blue              |
| cyan        | Cyan                  |
| teal        | Teal                  |
| grey        | Grey                  |
| black       | Black                 |
| green       | Green                 |
| Lgreen      | Light Green           |
| violet      | Violet                |
| lavender    | Lavender flower       |
| magenta     | Magenta               |
| white       | White                 |
| brown       | yes                   |


---

### Extra Feature
- Type `std::cout<<clrScr;` for clearing enitire terminal output.

## Few Examples :

![image](https://github.com/ArcShahi/arc_color/assets/90377780/5761077d-1bcd-4d1b-80bd-dc163de6fdd8)
