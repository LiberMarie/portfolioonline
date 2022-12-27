#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>

void analyse_events(sfRenderWindow *window, sfEvent event)
{

    	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtMouseButtonPressed){
			manage_mouse_click(event.mouseButton, window);
        }  
    } 
}

int main(void)
{
	analyse_events(window, event)
}