#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture textureW;
Texture textureB;
Sprite sprite;
int main5() {
	textureW.loadFromFile("chessw.png");
	textureB.loadFromFile("chessb.png");
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Ajedrez");
	int squareSize = 800 / 8;
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		for (size_t i = 0; i < 8; i++)
			for (size_t j = 0; j < 8; j++)
			{
				sprite.setPosition(i * squareSize, j * squareSize);
				if ((i + j) % 2 == 0)
				{
					sprite.setTexture(textureW);
					App.draw(sprite);
				}
				else
				{
					sprite.setTexture(textureB);

					App.draw(sprite);
				}
			}

		App.display();
	}
	return 0;
}
