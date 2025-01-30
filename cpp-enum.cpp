#include <stdio.h>

#include "c-enum.h"

void use_width(Width width) {
    printf("width = %d  ", width); // implicit type conversion of enum to int
    printf("width: %s\n", width_to_string(width));
}

void use_color(Color color) {
    printf("color = %d  ", color);
    printf("color: %s\n", color_to_string(color));
}

int main()
{
    Width width;
    Color color;

    printf("CPP enum\n");
    printf("========\n");

    width = SMALL;
    color = RED;
    
    use_width(width);
    use_color(color);

    use_width(SMALL);
    use_width(MEDIUM);
    use_width(LARGE);

    use_color(RED);
    use_color(GREEN);
    use_color(BLUE);

    // 5 compile-time errors

    // use_width(color);      // Passing the wrong enum type is a comile-time error
    // use_color(width);      // Passing the wrong enum type is a comile-time error

    // use_width(width + 23); // Arithmetic operation is a compile-time errors
    // use_color(MEDIUM);     // Passing the wrong enum type is a compile-time error
    // use_color(SMALL+34);   // Both violations are errors
}
