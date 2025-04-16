#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H

class Newton_class {
public:
    Newton_class(void);
    ~Newton_class(void);
    void setStart(double x0);
    void setTolerance(double eps);
    double solve();

private:
    double x0;
    double eps;
};

#endif
