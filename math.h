#ifndef __C_TOOLS_MATH_H__
#define __C_TOOLS_MATH_H__

#include <math.h>


///// Structs /////

typedef struct Vec2f {
    float x;
    float y;
} Vec2f;

inline Vec2f vec2f_add(const Vec2f* vec1, const Vec2f* vec2);
inline Vec2f vec2f_sub(const Vec2f* vec1, const Vec2f* vec2);
inline Vec2f vec2f_mul(const Vec2f* vec1, const Vec2f* vec2);
inline Vec2f vec2f_div(const Vec2f* vec1, const Vec2f* vec2);
inline float vec2f_dot(const Vec2f* vec1, const Vec2f* vec2);
inline Vec2f vec2f_scal_mul(const Vec2f* vec, float scalar);
inline Vec2f vec2f_scal_div(const Vec2f* vec, float scalar);
inline float vec2f_len(const Vec2f* vec);
inline float vec2f_len_sq(const Vec2f* vec);
inline Vec2f vec2f_normalized(const Vec2f* vec);


///// General math /////

int max_i(int a, int b);
float max_f(float a, float b);
double max_d(double a, double b);

int min_i(int a, int b);
float min_f(float a, float b);
double min_d(double a, double b);

int clamp_i(int value, int a, int b);
int clamp_f(int value, int a, int b);
int clamp_d(int value, int a, int b);

#ifdef C_TOOLS_IMPLEMENTATION

///// Vec2f implementation /////

Vec2f vec2f_add(const Vec2f* vec1, const Vec2f* vec2)
{
    return (Vec2f){ 
        .x = vec1->x + vec2->x,
        .y = vec1->y + vec2->y
    };
}

Vec2f vec2f_sub(const Vec2f* vec1, const Vec2f* vec2)
{
    return (Vec2f){ 
        .x = vec1->x - vec2->x,
        .y = vec1->y - vec2->y
    };
}

Vec2f vec2f_mul(const Vec2f* vec1, const Vec2f* vec2)
{
    return (Vec2f){ 
        .x = vec1->x * vec2->x,
        .y = vec1->y * vec2->y
    };
}

Vec2f vec2f_div(const Vec2f* vec1, const Vec2f* vec2)
{
    return (Vec2f){ 
        .x = vec1->x / vec2->x,
        .y = vec1->y / vec2->y
    };
}

float vec2f_dot(const Vec2f* vec1, const Vec2f* vec2)
{
    return vec1->x * vec2->x + vec1->y * vec2->y;
}

Vec2f vec2f_scal_mul(const Vec2f* vec1, float scalar)
{
    return (Vec2f){
        .x = vec1->x * scalar,
        .y = vec1->y * scalar
    };
}

Vec2f vec2f_scal_div(const Vec2f* vec1, float scalar)
{
    return (Vec2f){
        .x = vec1->x / scalar,
        .y = vec1->y / scalar
    };
}

float vec2f_len(const Vec2f* vec)
{
    return sqrt(vec->x * vec->x + vec->y * vec->y);
}

float vec2f_len_sq(const Vec2f* vec)
{
    return vec->x * vec->x + vec->y * vec->y;
}

Vec2f vec2f_normalized(const Vec2f* vec)
{
    return vec2f_scal_div(vec2f_len(vec));
}

///// General math implementation /////

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