// with tag
// enum <tag> {<identifier_1>, <identifer_2>, ..., <identifier_N>} // <identifier_i> is a constant with type int

// without tag, cannot be used to declare variables
// Alternative to #define
// enum {<identifier_1>, <identifer_2>, ..., <identifier_N>} // <identifier_i> is a constant with type int

// Variables with an enumeration type can generally be used as ordinary int variables.

// enum tag_Width {SMALL, MEDIUM, LARGE};
enum tag_Width {SMALL=100, MEDIUM, LARGE};

typedef enum tag_Width Width;

// typedef enum {RED, GREEN, BLUE} Color;
typedef enum {RED=200, GREEN, BLUE} Color;


// utilties to convert enum to string

const char* width_to_string(Width width) {
  switch(width) {
    case SMALL : return "SMALL" ;
    case MEDIUM: return "MEDIUM";
    case LARGE : return "LARGE" ;
    
    default    : return "(unkown width)";
  }
}

const char* color_to_string(Color color) {
  switch(color) {
    case RED   : return "RED" ;
    case GREEN : return "GREEN";
    case BLUE  : return "BLUE" ;
    
    default    : return "(unkown color)";
  }
}
