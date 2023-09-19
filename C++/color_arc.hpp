#ifndef ANSI_8BIT_COLORS
#define ANSI_8BIT_COLORS





enum class Color : std::uint8_t
{

	red = 160,
	rasp=198,
	pink = 210,
    yellow = 11,
	Lyellow=227,
	orange=208,
	blue=27,
	sky_blue=39,
	cyan=51,
	teal=30,
	grey=8,
	black=0,
	green=10,
	Lgreen=118,
	violet=99,
	magenta=5,
	white = 15,
	
	
	

};

enum class BG : std::uint8_t
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
	white=15,
};

constexpr char ANSI_COLOR_PREFIX[] = "\033[38;5;";

constexpr char ANSI_BG_COLOR_PREFIX[] = "\033[48;5;";

constexpr char RESET[] = "\033[0m"; // for resetting the Terminal Color Formatting

constexpr char clrScr[] = "\033[2J\033[H";


// For text Color 
std::ostream& operator<<(std::ostream& out, Color color_code)
{

	return out << ANSI_COLOR_PREFIX << static_cast<short>(color_code) << 'm';

}

std::ostream& operator<<(std::ostream& out, BG BG_color)
{
	return out << ANSI_BG_COLOR_PREFIX << static_cast<short>(BG_color) << 'm';
}

#endif // ANSI_8BIT_COLORS
