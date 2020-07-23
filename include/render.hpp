// Ryan Jacoby

class Render {
public:
    Render();
    ~Render();
    char loop();
};

struct RenderColor {
    int fg, bg;

    RenderColor(int, int);
};