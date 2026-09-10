#include <iostream>
#include "rect.hpp"

int main()
{
    Rect rectangle(Dimension(10, 10));
    int height, width;

    // Taking dimension from user:
    std::cout<<"Enter height of the rectangle: ";
    std::cin>>height;
    std::cout<<"Enter width of the rectangle: ";
    std::cin>>width;
    
    // Updating dimensions
    rectangle.setDimension(Dimension(height, width));
    
    // Drawing rectangle
    rectangle.Draw();
    std::cout << std::endl;

    // Rectangle info
    std::cout << "Rectangle height: " << rectangle.dimension()->height() << std::endl;
    std::cout << "Rectangle width: " << rectangle.dimension()->width() << std::endl;

    return 0;
}