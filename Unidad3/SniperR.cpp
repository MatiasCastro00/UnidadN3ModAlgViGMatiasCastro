#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture textureNew;
Texture textureCenter;
Sprite circleNew;
int main() {
	textureNew.loadFromFile("rcircle.png");
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
				circleNew.setTexture(textureNew);
				circleNew.setOrigin(circleNew.getLocalBounds().width * i, circleNew.getLocalBounds().height * j);
				circleNew.setPosition(width * i, height * j);
				App.draw(circleNew);
			}
		}
		textureCenter.loadFromFile("bcircle.png");
		circleNew.setTexture(textureCenter);
		circleNew.setOrigin(circleNew.getLocalBounds().width / 2 , circleNew.getLocalBounds().height / 2 );
		circleNew.setPosition(width / 2, height / 2);
		App.draw(circleNew);
		App.display();
	}
	return 0;
}
