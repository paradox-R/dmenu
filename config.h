/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Cascadia Code:pixelsize=13:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
//#include "/home/paradox/.cache/wal/colors-wal-dmenu.h"
static const char *colors[SchemeLast][2] = {
		     //     fg         bg       
	[SchemeNorm] = { "#FEFEFE", "#181617" },
	[SchemeSel] = { "#E4312C", "#181617" },
	[SchemeOut] = { "#FEFEFE", "#181617" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
