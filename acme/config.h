/*
 *  fontnames-array takes two fonts, first one
 *  it treats as a proportional-width font and uses
 *  everywhere possible and as a main UI font, while
 *  the second font it treats as a fixed-width font,
 *  changeable to any text window by executing `Font`
 *  from tag window. Note: `Font` can also be executed
 *  with arguments with any `fontsrv -p .` approved
 *  fonts, thus allowing you to experiment with font
 *  sizes and whether you want anti-aliasing or not.
 */

char *fontnames[2] = {
	"/mnt/font/GohuFont/8/font",
	"/mnt/font/ProFont for Powerline/9/font"
};

/*
 *  globalautoindent tries to guess where to
 *  indent by the context of the previous line.
 *
 *  comes highly suggested.
 */

int globalautoindent	= TRUE;

/*
 *  swapping scroll buttons makes B1 scroll down
 *  instead of up and B2 up instead of down
 */

int	swapscrollbuttons	= FALSE;

/*  
 *  bartflag triggers quote unquote experimental
 *  mode, in which instead of mouse following focus
 *  from window to window etc. it in fact, does not.
 *
 *  comes highly suggested.
 */
 
int bartflag			= TRUE;

/*
 *  colors-constants. now let me take a minute to explain
 *  them. tagbg/fg/hlbg/hlfg are respectively your tag
 *  tag windows background, foreground, highlighted back-
 *  and foreground color. The same really applies to c_txt*-
 *  variants of the same constant just in this case its about
 *  the text window
 *  
 *  `c_winbutton` is the button which you can adjust your
 *   columns with. `c_colbutton` represents a separate text 
 *  windows button. `c_tmpbutton` is the so-called "dirty"
 *  or "unclean" -marker aka just a modified file put in the
 *  middle of `c_colbutton`. ``c_scrollbg` is plain and simple
 *  your scrollbar background color.
 *
 *  the last defines are for defining the color of the specific
 *  buttons highlight background.
 */

#define c_tagbg			0xFFFFFFFF
#define c_tagfg			0x000000FF
#define c_taghlbg		0x999999FF
#define c_taghlfg		0x000000FF

#define c_txtbg			0xFFFFFFFF
#define c_txtfg			0x000000FF
#define c_txthlbg		0x999999FF
#define c_txthlfg		0x000000FF

#define c_winbutton		0x4d4d4dFF
#define c_colbutton		0x55aaaaFF
#define c_tmpbutton		0x55aaaaFF
#define c_scrollbg		0x999999FF

#define c_button2hl		0x55aaaaFF
#define c_button3hl		0x55aaaaFF
