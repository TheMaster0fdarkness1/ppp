#include "box.h"

int screen()
{	

        char title_screen[] =
		"==========================\n"
		"=        Miyeonsi        =\n"
		"=                        =\n"
		"=         Start          =\n"
		"=         H.T.P          =\n"
		"=        E x i t         =\n"
		"==========================\n"
		"\0";
	
	
	
	char title_screen2[] =
		"==========================\n"
		"=      How To Play??     =\n"
		"=		          =\n"
		"=      I Don't Know.     =\n"
		"=         		  =\n"
		"=         Start?         =\n"
		"=       (1.Y   2.N)      =\n"
		"==========================\n"
		"\0"
	

	puts(title_screen);
	puts(title_screen2);
	
	return 0;
}

