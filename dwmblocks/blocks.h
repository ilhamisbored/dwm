//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	1,		0},*/

	{"  ", "date '+%b %d %y %I:%M%p'",					1,		0},

	{"  ", "acpi | awk '{print $4}' | sed 's/,//g'", 5, 0},

	{"   ", "/home/ilham/.config/dwmblocks/scripts/vol.sh", 1, 10},

	{"  ", "/home/ilham/.config/dwmblocks/scripts/updates", 5, 9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
