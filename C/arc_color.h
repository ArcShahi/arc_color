#ifndef ANSI_8BIT_COLORS
#define ANSI_8BIT_COLORS

// Color codes

enum CC
{

    red = 160,
    rasp = 198,
    pink = 210,
    yellow = 11,
    Lyellow = 227,
    orange = 208,
    blue = 27,
    sky_blue = 39,
    cyan = 51,
    teal = 30,
    grey = 8,
    black = 0,
    green = 10,
    Lgreen = 118,
    violet = 99,
    magenta = 5,
    white = 15,
};

enum BGCC
{

    RED = 160,
    RASP = 198,
    PINK = 201,
    YELLOW = 11,
    L_YELLOW = 227,
    ORANGE = 208,
    BLUE = 27,
    SKY_BLUE = 39,
    CYAN = 51,
    TEAL = 30,
    GREY = 8,
    BLACK = 0,
    GREEN = 10,
    L_GREEN = 118,
    VIOLET = 99,
    MAGENTA = 5,

};

void Color(enum CC color_code)
{

    printf("\033[38;5;%dm", color_code);
}

void BG(enum CC color_code)
{
    printf("\033[48;5;%dm", color_code);
}

void end() { printf("\033[0m"); }
void rid() { printf("\033[2J\033[H"); }

// Deprecated !!
/*
  ! DON'T TOUCH IT

 FOR TEXT COLOR
 #define STRINGIFY(TEXT) #TEXT
 #define CLR(color_code) "\033[38;5;" STRINGIFY(color_code) "m"

 FOR BACKGROUND COLOR
 #define BG_CLR(color_code) "\033[48;5;" STRINGIFY(color_code) "m"

*/

#endif // ANSI_8BIT_COLORS
