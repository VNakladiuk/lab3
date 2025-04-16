#ifndef DYCHOTOMY_CLASS_H
#define DYCHOTOMY_CLASS_H

class Dychotomy_class {
public:
    Dychotomy_class(void);
    ~Dychotomy_class(void);
    void setInterval(double a, double b);
    void setTolerance(double eps);
    double solve();

private:
    double a;
    double b;
    double eps;
};

#endif
