#ifndef ANSI_8BIT_COLORS
#define ANSI_8BIT_COLORS


// Resets the color formatting
#define RESET "\033[0m"  
#define clrsrc "\033[2J\033[H" // clears the string

// Color codes 

#define RED 160
#define RASP 198
#define PINK 201
#define YELLOW 11
#define L_YELLOW 227
#define ORANGE 208
#define BLUE 27
#define SKY_BLUE 39
#define CYAN 51
#define TEAL 30
#define GREY 8
#define BLACK 0
#define GREEN 10
#define L_GREEN 118
#define VIOLET 99
#define MAGENTA 5
#define WHITE 255










//  ! DON'T TOUCH IT

// ? FOR TEXT COLOR
#define STRINGIFY(TEXT) #TEXT
#define CLR(color_code)  "\033[38;5;" STRINGIFY(color_code) "m"

// ? FOR BACKGROUND COLOR
#define BG_CLR(color_code) "\033[48;5;" STRINGIFY(color_code) "m"





#endif // ANSI_8BIT_COLORS
