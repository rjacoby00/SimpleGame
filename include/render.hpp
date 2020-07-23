// Ryan Jacoby

class Render {
private:
    Map * current_map;
public:
    Render(Map *);
    ~Render();
    char draw();
};
