#include <iostream>
#include "rect.hpp"

int main()
{
    Rect rectangle(Dimension(10, 10));
    rectangle.Draw();

    std::cout << std::endl;
    std::cout << "Rectangle height: " << rectangle.dimension()->height() << std::endl;
    std::cout << "Rectangle width: " << rectangle.dimension()->width() << std::endl;

    return 0;
}