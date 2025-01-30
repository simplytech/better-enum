typedef enum { E_SMALL=100, E_MEDIUM, E_LARGE } e_Width;
typedef enum { E_RED  =200, E_GREEN , E_BLUE  } e_Color;

typedef struct s_Width { e_Width e;} Width;
typedef struct s_Color { e_Color e;} Color;

// A struct containing the enum, implicitly type cast to a Width struct:
#define SMALL  ((Width) {E_SMALL })
#define MEDIUM ((Width) {E_MEDIUM})
#define LARGE  ((Width) {E_LARGE })

#define RED   ((Color) {E_RED  })
#define GREEN ((Color) {E_GREEN})
#define BLUE  ((Color) {E_BLUE })



// utilties to convert enum to string

const char* width_to_string(Width width) {
  switch(width.e) {
    case E_SMALL : return "SMALL" ;
    case E_MEDIUM: return "MEDIUM";
    case E_LARGE : return "LARGE" ;
    
    default    : return "(unkown width)";
  }
}

const char* color_to_string(Color color) {
  switch(color.e) {
    case E_RED   : return "RED" ;
    case E_GREEN : return "GREEN";
    case E_BLUE  : return "BLUE" ;
    
    default    : return "(unkown color)";
  }
}
