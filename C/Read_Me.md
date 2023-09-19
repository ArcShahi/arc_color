# Change Terminal Text / Output in C

## Steps :
1. Down the `arc_color.h` Library from the repo.
2. Add that Library to your IDE / Code ediotr Directory.
3. Include that header in your Traslation Unit using `#include <arc_color.h>
4. Done >_<

## Syntax to use it in your code. 

### To change Text Color Only .


```c
printf(CLR(RED)"Red text\n"RESET); // CLR(color_name) : follow the syntax as it is and use RESET when changing background color.

```

### To change Background Color Only

```c

 printf( BG_CLR(VIOLET)"violet Backgroung\n"RESET); // BG_CLR(color_name)

```


### To Change both Text Color and Background Color 


> [!WARNING]
> Feature yet to be added


## Table of Colors

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


---
