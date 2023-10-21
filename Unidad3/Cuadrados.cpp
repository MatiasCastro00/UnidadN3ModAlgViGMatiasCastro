#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <list>
using namespace sf;
std::list<Texture> texturesSquares;
Sprite spriteSquare;
int main7() {
	Texture tex;
	tex.loadFromFile("cuad_red.png");
	texturesSquares.push_back(tex);
	tex.loadFromFile("cuad_yellow.png");
	texturesSquares.push_back(tex);
	tex.loadFromFile("cuad_blue.png");
	texturesSquares.push_back(tex);
	tex.loadFromFile("cuad_grey.png");
	texturesSquares.push_back(tex);

	sf::RenderWindow App(sf::VideoMode(512, 512, 32),
		"Ajedrez");
	while (App.isOpen())
	{
		App.clear();
		int i = 0;
		int j = 0;
		for (const auto& texture : texturesSquares) {
			if (i == 2)
			{
				i = 0;
				j++;
			}
			spriteSquare.setTexture(texture);
			Vector2u size = texture.getSize();
			spriteSquare.setPosition(256 * i, 256 * j);
			App.draw(spriteSquare);
			i++;
		}
		App.display();
	}

	return 0;
}