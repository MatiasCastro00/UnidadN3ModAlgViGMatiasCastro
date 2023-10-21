#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include<windows.h>    
#include <iostream>
using namespace sf;
Texture rotationTexture;
Sprite rotationSprite;
int main2()
{
	rotationTexture.loadFromFile("plataforma.jpg");
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Rotation");
	float rotationValue = 0;

	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		rotationSprite.setTexture(rotationTexture);
		rotationSprite.setOrigin(rotationSprite.getLocalBounds().width / 2, rotationSprite.getLocalBounds().height / 2);
		rotationSprite.setPosition(App.getSize().x / 2, App.getSize().y / 2);
		App.draw(rotationSprite);
		rotationSprite.rotate(1);
		sleep(sf::seconds(0.004));
		App.display();
	}
	return 0;
}