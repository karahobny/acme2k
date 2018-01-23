/*
 *  fontnames-array takes two fonts, first one
 *  it treats as a proportional-width font and uses
 *  everywhere possible and as a main UI font, while
 *  the second font it treats as a fixed-width font,
 *  changeable to any text window by executing `Font`
 *  from tag window.
 *
 *  Note: `Font` can also be executed
 *  with arguments with any `fontsrv -p .` approved
 *  fonts, thus allowing you to experiment with font
 *  sizes and whether you want anti-aliasing or not.
 */

char *fontnames[2] = {
	"/lib/font/bit/profont/profont-12.font",
	"/lib/font/bit/mntcarlo/mntcarlo.font"
};

/*
 * globalautoindent tries to guess where to
 * indent by the context of the previous line.
 *
 * comes highly suggested.
 */

int globalautoindent = TRUE;

/*
 * swapping scroll buttons makes B1 scroll down
 * instead of up and B2 up instead of down
 */

int	swapscrollbuttons = FALSE;

/*
 * bartflag triggers quote unquote experimental
 * mode, in which instead of mouse following focus
 * from window to window etc. it in fact, does not.
 *
 * comes highly suggested.
 */

int bartflag = TRUE;

/* colorscheme */

static const unsigned int c_tag_bg        = 0xFFFFFFFF;
static const unsigned int c_tag_fg        = 0x000000FF;
static const unsigned int c_tag_hl_bg     = 0x999999FF;
static const unsigned int c_tag_hl_fg     = 0x000000FF;

static const unsigned int c_txt_bg        = 0xFFFFFFFF;
static const unsigned int c_txt_fg        = 0x000000FF;
static const unsigned int c_txt_hl_bg     = 0x999999FF;
static const unsigned int c_txt_hl_fg     = 0x000000FF;

static const unsigned int c_window_button = 0x55aaaaFF;
static const unsigned int c_column_button = 0x4d4d4dFF;
static const unsigned int c_tmp_button    = 0x55aaaaFF;
static const unsigned int c_scrollbar_bg  = 0x999999FF;

static const unsigned int c_button2_hl    = 0x55aaaaFF;
static const unsigned int c_button3_hl    = 0x55aaaaFF;
