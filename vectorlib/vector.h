class Vector
{
    private:
        double x_,y_;
    public:
        Vector(double x,double y):x_(x),y_(y) {}
        void print();
        Vector operator+(const Vector& v2);
};        
