/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const unsigned int alpha = 0xcf;     /* Amount of opacity. 0xff is opaque             */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "NotoColorEmoji.tff:size=24"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
    // Gruvbox
  	[SchemeNorm] = { "#ebdbb2", "#282828" },
  	[SchemeSel] = { "#ebdbb2", "#98971a" },
  	[SchemeOut] = { "#ebdbb2", "#8ec07c" },
    
  // Dracula
// 	[SchemeNorm] = { "#f8f8f2", "#282a36" },
// 	[SchemeSel] = { "#f8f8f2", "#6272a4" },
// 	[SchemeOut] = { "#000000", "#00ffff" },

  // Solarized
//   [SchemeNorm] = { "#839496", "#002b36" },
// 	[SchemeSel] = { "#839496", "#073642"},
//  	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
