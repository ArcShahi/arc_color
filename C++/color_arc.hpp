#ifndef ANSI_8BIT_COLORS
#define ANSI_8BIT_COLORS





enum class Color : std::uint8_t
{


	red = 160,
	crimson = 124, // new
	rasp = 198,
	pink = 201,
	hot_pink = 198, //new
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
	lavender = 135, //new
	magenta = 5,
	white = 15,
	brown = 94,




};

enum class BG : std::uint8_t
{

	red = 160,
	crimson = 124, // new
	rasp = 198,
	pink = 201,
	hot_pink = 198, //new
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
	lavender = 135, //new
	magenta = 5,
	white = 15,
	brown = 94,

};


constexpr char ANSI_CLR_PREFIX[] = "\033[38;5;";
constexpr char ANSI_BG_CLR_PREFIX[] = "\033[48;5;";
constexpr char CLS[] = "\033[2J\033[H";
constexpr char NoClr[] = "\033[0m";


std::ostream& operator<<(std::ostream& out, Color color_code)
{

	return out << ANSI_CLR_PREFIX << static_cast<short>(color_code) << 'm';

}

std::ostream& operator<<(std::ostream& out, BG color_code)
{

	return out << ANSI_CLR_PREFIX << static_cast<short>(color_code) << 'm';

}




#endif // ANSI_8BIT_COLORS
