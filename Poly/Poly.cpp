/*
Name: Andrew Kim
Date: April 16, 2021
Program: Poly Lab

I hereby certify that this program represents my
work and that the design and logic was completed
without outside assistance.

Signature: Andrew Kim
*/


#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shape.h"
#include "TwoDimension.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

void determineShapes(vector<Shape*>&, unsigned int);


int main()
{
    unsigned int shapesRemaining, shapeCount = 0;
    vector<Shape*> shapes;
    
    // Determine number of desired shapes
    cout << "Please enter the number of shapes you would like to view: ";
    cin >> shapesRemaining;
    system("cls");

    determineShapes(shapes, shapesRemaining);

    sf::RenderWindow window(sf::VideoMode(400, 400), "Poly");

    window.setFramerateLimit(1); // Update every 2 seconds

    /* // Test
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Green);*/


    while (window.isOpen())
    {
        sf::Event event;

        // Close window
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        shapes.at(shapeCount)->draw(window);

        //window.draw(shape);
        
        window.display();
        sf::sleep(sf::seconds(2)); // Pause for 2 seconds

        // Move onto next shape in vector; moves back to beginning of list if
        // at the end
        if (shapeCount < shapes.size() - 1)
            shapeCount++;
        else
            shapeCount = 0;
    }

    return 0;
}


// Determine user's desired shapes
void determineShapes(vector<Shape*>& shapes, unsigned int shapesRemaining)
{
    unsigned int shapeCount = 0, shapeType, radius, base, height;

    // Determine desired shapes
    while (shapesRemaining > 0)
    {
        // Identify current shape selection
        cout << "This is Shape " << ++shapeCount << '.' << endl << endl;
        shapesRemaining--;

        // Prompt shape options
        cout << "Options:\n1) Circle\n2) Triangle\n3) Rectangle\n\n";
        cout << "Please enter the corresponding # to your desired shape: ";
        cin >> shapeType;

        // Determine shape choice
        switch (shapeType)
        {
        case 1: // Circle
            cout << "Plase enter the radius of this circle: ";
            cin >> radius;

            shapes.push_back(new Circle(radius));
            break;

        case 2: // Triangle
            cout << "Plase enter the base of this triangle: ";
            cin >> base;
            cout << "Please enter the height of this triangle: ";
            cin >> height;

            shapes.push_back(new Triangle(base, height));
            break;

        case 3: // Rectangle
            cout << "Plase enter the base of this rectangle: ";
            cin >> base;
            cout << "Please enter the height of this rectangle: ";
            cin >> height;

            shapes.push_back(new Rectangle(base, height));
            break;

        default:
            cout << "That was not a valid option. Please try again." << endl;

            // Reset this iteration so the user can try again
            shapesRemaining++;
            shapeCount--;

            system("pause");
            break;
        }

        cout << endl << endl << endl;
    }

    return;
}
