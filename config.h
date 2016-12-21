/* user and group to drop privileges to */
static const char *user  = "gtpl";
static const char *group = "gtpl";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#111111",   /* during input */
	[FAILED] = "#222222",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
