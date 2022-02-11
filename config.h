/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "#2f2f2f",     /* after initialization */
	[INIT] =   "#ebdbb2",     /* after initialization */
	[INPUT] =  "#85b274",   /* during input */
	[FAILED] = "#fb4934",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 80;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};
