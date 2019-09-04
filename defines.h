/*
 * File:  defines.h 
 *
 * Created on Septemver 3, 2019, 10:00 AM
 */
#ifndef __DEFINES__
#define __DEFINES__

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <json-c/json_object.h>
#include <json-c/json_tokener.h>
#include <stdbool.h>
#include <ctype.h>
#include "b64.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <sys/wait.h>
#include <arpa/inet.h>
//#include "decode.c"

#include <openssl/bio.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
//#include "encode.c"
//#include "ssl.c"

#define SPACE ' '
#define WORD_LEN 10
#define NUM_WORDS 10
#define MAX_USER_INPUT 1000
#define BUFFER_SIZE 4096

void get_user_input(char *);
void analyze(char *, char *);
void response(char *);
void init();
int find_restaurants();
int show_weather(char*); 
int email();
int ssl_connect(char *);
/* catagories enum - DO NOT evaluate elements
 * LAST_FIELD must remain last
 */
enum catagories {
	WEATHER,
	GREETING,
	MEDIA,
	GOOGLE,
	EMAIL,
	CALENDAR,
	YOUTUBE,
	HELP,
	RESTAURANT,
	LAST_FIELD
};

/* scores array - used for classification of input*/
extern int scores[LAST_FIELD];
extern const char *catagories_str[LAST_FIELD];

/* 3D array of al catagory classifiers*/
extern const char *classifier[LAST_FIELD][NUM_WORDS][WORD_LEN];
/* globally defined variables */
extern char buf[9999];
extern char buffer[9999];
extern char buff[9999];
extern char weather[9999];
extern char song[9999];
extern char calendar[100];
extern char example[1000];
extern char split[NUM_WORDS][WORD_LEN];
extern int compare[10];
extern char result[20];
extern char str[1000];
extern char *start;
extern char pv;
extern char location[1000];
extern char youtube[1000];
extern char songs[1000];
extern char cal[100];
extern char search[100];
extern int c, d, len;
extern char *WebBrowser;
extern char *M_P;
extern char *HOME_DIR;
#endif //__DEFINES__
