//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/	
	{" 🔊 ", "/home/zaedus/.dwm/scripts/volume",			 0,		          15},

	{" 🔋 ", "/home/zaedus/.dwm/scripts/battery",      20,            10},

	{" 🕑 ", "echo -e $(date +\"%a, %B %d %l:%M%p\"| sed 's/  / /g')",			   60,		          0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
