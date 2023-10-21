#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture;
Sprite circle;
int main1() {
	texture.loadFromFile("rcircle.png");
	int width = 800;
	int height = 600;
	sf::RenderWindow App(sf::VideoMode(800, 600, 600),
		"Sniper");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < 2; j++)
			{
				circle.setTexture(texture);
				circle.setOrigin(circle.getLocalBounds().width*i, circle.getLocalBounds().height*j);
				circle.setPosition(width*i, height*j);
				App.draw(circle);
			}
		}

		App.display();
	}
	return 0;
}
