#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
Texture platformTexture;
Sprite platformSprite;
int main()
{
	platformTexture.loadFromFile("plataforma.jpg");
	Vector2u textureSize = platformTexture.getSize();
	float padding = (float)textureSize.x;
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Plataformas");
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		for (size_t i = 0; i < 8; i++)
		{
			platformSprite.setTexture(platformTexture);
			platformSprite.setOrigin(platformSprite.getLocalBounds().width / 2, platformSprite.getLocalBounds().height);
			platformSprite.setPosition(i * (padding * 0.1 * 2), 800);
			platformSprite.setScale(0.1, 0.1 * i);
			App.draw(platformSprite);
		}
		platformSprite.setTexture(platformTexture);
		platformSprite.setOrigin(0, 0);
		platformSprite.setPosition(8 * (padding * 0.1 * 2), 800 - (25 * 7));
		platformSprite.setScale(0.1 * 14, 0.1);
		App.draw(platformSprite);
		App.display();
	}
	return 0;
}