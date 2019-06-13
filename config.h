/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Noto Sans Display Nerd Font:size=10"
};

static char *name = "dmenu";   /* -n  option; */
static char *class = "Dmenu";  /* -c  option; */

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#005577";
static const char col_black[]       = "#000000";
static const char col_aqua[]        = "#00ffff";

static double opacity = 1.0;         /* -o  option; 0 being transparent and 1 being opaque */

static const char *colors[SchemeLast][2] = {
	/*                  fg          bg    */
	[SchemeNorm] = { col_gray3,  col_gray1},
	[SchemeSel] =  { col_gray4,  col_cyan },
	[SchemeOut] =  { col_black,  col_aqua },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;
