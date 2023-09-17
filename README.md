# Want to color of of terimal text  ?!

This will take just few minutes, so read it completely. 
The header for C/CPP which will help output text in different colors and styles.

### Steps to Setup in your code :
1. Go to this link and download the header file : [Download Here](https://www.mediafire.com/file/vupzeueiilw3bay/arc_color.h/file)
2. Add this file to your code diretory.
3.  not add this header in your code using `#include "arc_color.h"`
4.  Done >_<

See color Table[^1] at the bottom to choose color from.


   ## HOW TO COLOR TEXT IN C++
   ```cpp
 int main() {
      std::cout << CLR(RED) << " RED TEXT\n";
      std::cout << CLR(PINK) << "Pink Text\n";
      std::cout << CLR(YELLOW) << "Yello Text\n";
     std::cout << CLR(ORANGE) << "Orange Text\n"<<RESET; // this resets the terminal foramtting
}
```

## IN C

```c
printf(CLR(RED)"Red text\n"RESET); // CLR(color_name) : follow the syntax as it is and use RESET when changing background color.

```

## Change Background Color in


### C++

```cpp

std::cout << BG_CLR(RED) << "White text on Red Background\n"<<RESET;
std::cout << BG_CLR(VIOLET) << "White text on violet Background\n" << RESET;

```

### C

```c

 printf( BG_CLR(VIOLET)"violet Backgroung\n"RESET); // BG_CLR(color_name)


```

 ## Change the Background and color at the same time (ONLY SUPPORTED IN C++ )

```cpp

std::cout << CLR(YELLOW) << BG_CLR(RED) << "Yellow Text on Red Background\n\n" << RESET; 

```

---

## Few Examples :



![Loding Bar](https://github.com/ArcShahi/arc_color/assets/90377780/96a826c8-75c9-4c4d-bb4f-6af23aae6472)

![tree](https://github.com/ArcShahi/arc_color/assets/90377780/b37e0791-fd21-49ca-bf45-87e94eb68675)


![clr text](https://github.com/ArcShahi/arc_color/assets/90377780/30a472d4-9553-4458-bafa-787474537d8a)







## Table to choose colors 
[^1]: Table
| Color code    | Full Name  |
|-------------|------------|
| RED         | RED        |
| RASP        | Raspberry  |
| PINK        | Pink       |
| YELLOW      | Yellow     |
| L_YELLOW    | Light Yellow |
| ORANGE      | Orange     |
| BLUE        | Blue       |
| SKY_BLUE    | Sky Blue   |
| CYAN        | Cyan       |
| TEAL        | Teal       |
| GREY        | Grey       |
| BLACK       | Black      |
| GREEN       | Green      |
| L_GREEN     | Light Green |
| VIOLET      | Violet     |
| MAGENTA     | Magenta    |
| WHITE       | White      |
| RESET       |  resets terminal formatting  |


### You can also use any color from  0-255 ( may not be supported by Many consoles ).

```cpp
   std::cout <<CLR(200)<< " Colored Text \n"<<RESET;
```

>[!note]
> -Many changes will be made within the upcoming weeks, this Library is nowwhere near complete.
>
> -The source code will posted here once few changes and optimization is done.
> 
> -First I must learn few things ( I'll split this Libray for C / C++ differently , because I"ve better options to write this library for C++ only.

## Please provide any feedback/issues you've.

## Hritik Shahi  ( ICFA UNIVERSITY )

