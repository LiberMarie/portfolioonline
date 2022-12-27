#include <SFML/Graphics.hpp>
#include <iostream>

 sf::Texture texture;
    if (!texture.loadFromFile("../sfml-icon-small.png"))
    {
        std::cerr << "Error while loading texture" << std::endl;
        return -1;
    }