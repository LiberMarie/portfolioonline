#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Window/VideoMode.h>

int main(void)
{
    sfRenderWindow  *window;
    sfVideoMode     video_mode;

    video_mode.width = 800;
    video_mode.height = 600;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
                                    "MyWindow",
                                    sfDefaultStyle,
                                    NULL);
    while(sfRenderWindow_isOpen(window))
    {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
return(0);
}