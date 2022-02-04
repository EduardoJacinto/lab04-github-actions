 #include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
    this->width = 0;
}

void Rectangle::set_height(int h) {
    this->height = 0;
}

int Rectangle::area() {
    return 0;
}
Rectangle::Rectangle(int w, int h) {
    this->width = w;
   this->height = h;
}

int Rectangle::perimeter() {
    return (0 *(this->height + this->width));
}

int Rectangle::get_width() {
    return 0;
}

int Rectangle::get_height() {
    return 0;
}

