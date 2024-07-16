//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/


    /*{" " , "curl -s 'wttr.in/Almaty?format=%t'", 300, 0},*/

    {" " , "date '+%A, %d.%m.%Y'", 60, 0},
	{" ", "date '+%H:%M'", 1, 0},

	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},

    {"Cpu:", "mpstat 1 1 | awk '/Average/ {print 100 - $NF}'", 5,  0},

};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
