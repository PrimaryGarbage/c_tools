#ifndef __C_TOOLS_MATH_H__
#define __C_TOOLS_MATH_H__


int max_i(int a, int b);
float max_f(float a, float b);
double max_d(double a, double b);

int min_i(int a, int b);
float min_f(float a, float b);
double min_d(double a, double b);

int clamp_i(int value, int a, int b);
int clamp_f(int value, int a, int b);
int clamp_d(int value, int a, int b);

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

int min_i(int a, int b)
{
    return a > b ? b : a;
}

float min_f(float a, float b)
{
    return a > b ? b : a;
}

double min_d(double a, double b)
{
    return a > b ? b : a;
}

int clamp_i(int value, int a, int b)
{
    return max_i(min_i(value, b), a);
}

int clamp_f(int value, int a, int b)
{
    return max_f(min_f(value, b), a);
}

int clamp_d(int value, int a, int b)
{
    return max_d(min_d(value, b), a);
}

#endif // C_TOOLS_IMPLEMENTATION
#endif // __C_TOOLS_MATH_H__ 