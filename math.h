#ifndef __C_TOOLS_MATH_H__
#define __C_TOOLS_MATH_H__


int max_i(int a, int b);
float max_f(float a, float b);
double max_d(double a, double b);

#ifndef C_TOOLS_IMPLEMENTATION
#define C_TOOLS_IMPLEMENTATION

int max_i(int a, int b)
{
    return a < b ? b : a;
}

float max_f(float a, float b)
{
    return a < b ? b : a;
}

double max_d(double a, double b)
{
    return a < b ? b : a;
}

#endif // C_TOOLS_IMPLEMENTATION
#endif // __C_TOOLS_MATH_H__ 