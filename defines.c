/*
 * File:  defines.h 
 *
 * Created on Septemver 3, 2019, 10:00 AM
 */
#ifndef __GLOBAL_DEFINES__
#define __GLOBAL_DEFINES__
#include "defines.h"

/* scores array - used for classification of input*/
int scores[LAST_FIELD] = {0};
const char *catagories_str[LAST_FIELD] =
{
	"weather",
	"greeting",
	"media",
	"google",
	"email",
	"calendar",
	"youtube",
	"help",
	"restaurant"
};

/* 3D array of al catagory classifiers*/
const char *classifier[LAST_FIELD][NUM_WORDS][WORD_LEN] = {
	[WEATHER] =
	{
		{"please", "show", "outside", "condition"},
		{"how", " ", "weather", "today"},
		{"weather", " ", "desired", "place"}
	},
	[GREETING] = {
		{"hey", "how", "are", "you"},
		{"how", "welcome", "morning", "doing"},
		{"hello", "there", "good", "afternoon"}
	},
	[GOOGLE] = {
		{"open", "google", "for", "me"},
		{"I", "want", "search", "browse"},
		{"can", "you", "open", "google"}
	},
	[MEDIA] = {
		{"can", "you", "list", "media"},
		{"video", "listen", "play", "music"},
		{"play", "something", "nice", "song "}
	},
	[RESTAURANT] = {
		{"Please", "find", "some", "restaurants"},
		{"Find", " ", "some", "restaurants"},
		{"Show", " ", " ", "restaurants"},
		{"Find", "places", "to", "eat"}
	},
	[EMAIL] = {
		{"can", "I", "send", "email"},
		{"mail", "new", "mails", "write"},
		{"Want", "to", "read", "emails"}
	},
	[CALENDAR] = {},
	[YOUTUBE] = {},
	[HELP] = {}
};

/* globally defined variables */
char buf[9999];
char buffer[9999];
char buff[9999];
char weather[9999];
char song[9999];
char calendar[100];
char example[1000];
char split[NUM_WORDS][WORD_LEN] = {};
int compare[10];
char result[20];
char str[1000], *start, pv, location[1000], youtube[1000], songs[1000], cal[100], search[100];
int c, d, len = 0;
char *WebBrowser;
char *M_P;
char *HOME_DIR;
#endif //__GLOBAL_DEFINES__
