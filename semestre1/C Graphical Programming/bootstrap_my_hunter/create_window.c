#include <SFML/Graphics.hpp>

int main(void)
{
    sfVideoMode mode = (sfVideoMode) {1000, 800, 32};
    const char *title = "my window";
    sfUint32 style = sfDefaultStyle;
    const sfContextSettings *settings = NULL;
    sfRenderWindow *sfRenderWindow_create(mode, *title, style, *settings);
    return(0);
}