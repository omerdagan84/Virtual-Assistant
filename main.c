#include "defines.h"


int main() {

	init();

    //Inform user about preferred media player, as to config file
    char preferred_media_player[1000];
    sprintf(preferred_media_player, "say Your preferred media player is %s", M_P);
    system(preferred_media_player);

    //Inform user about preferred web browser, as to config file
    char preferred_webbrowser[1000];
    sprintf(preferred_webbrowser, "say Your preferred webbrowser is %s", WebBrowser);
    system(preferred_webbrowser);

    do {

		get_user_input(example);
		analyze(example, result);
		response(result);

    } while ((strcmp(str, "stop") != 0));

    return 0;

}
