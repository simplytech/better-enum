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

    printf("C enum\n");
    printf("======\n");

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

    // 3 warnings but 5 run-time errors

    use_width(color);      // Passing the wrong enum type is allowed (with a warning)
    use_color(width);      // Passing the wrong enum type is allowed (with a warning)

    use_width(width + 23); // Arithmetic operations on enums are allowed.
    use_color(MEDIUM);     // Passing the wrong enum type is allowed (with a warning)
    use_color(SMALL+34);   // Both violations allowed

}
