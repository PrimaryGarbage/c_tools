#ifndef __C_TOOLS_MATH_H__
#define __C_TOOLS_MATH_H__


///// Structs /////

typedef struct Vector2f {
    float x;
    float y;
} Vector2f;

///////////////////


///// Vector2f functions /////

Vector2f vec2f_add(const Vector2f* vec1, const Vector2f* vec2);
Vector2f vec2f_sub(const Vector2f* vec1, const Vector2f* vec2);
Vector2f vec2f_mul(const Vector2f* vec1, const Vector2f* vec2);
Vector2f vec2f_div(const Vector2f* vec1, const Vector2f* vec2);
float vec2f_dot(const Vector2f* vec1, const Vector2f* vec2);
Vector2f vec2f_scal_mul(const Vector2f* vec1, float scalar);
Vector2f vec2f_scal_div(const Vector2f* vec1, float scalar);


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

#ifndef C_TOOLS_IMPLEMENTATION
#define C_TOOLS_IMPLEMENTATION

///// Vector2f implementation /////

Vector2f vec2f_add(const Vector2f* vec1, const Vector2f* vec2)
{
    return Vector2f { 
        .x = vec1->x + vec2->x,
        .y = vec1->y + vec2->y
    };
}

Vector2f vec2f_sub(const Vector2f* vec1, const Vector2f* vec2)
{
    return Vector2f { 
        .x = vec1->x - vec2->x,
        .y = vec1->y - vec2->y
    };
}

Vector2f vec2f_mul(const Vector2f* vec1, const Vector2f* vec2)
{
    return Vector2f { 
        .x = vec1->x * vec2->x,
        .y = vec1->y * vec2->y
    };
}

Vector2f vec2f_div(const Vector2f* vec1, const Vector2f* vec2)
{
    return Vector2f { 
        .x = vec1->x / vec2->x,
        .y = vec1->y / vec2->y
    };
}

float vec2f_dot(const Vector2f* vec1, const Vector2f* vec2)
{
    return vec1->x * vec2->x + vec1->y * vec2->y;
}

Vector2f vec2f_scal_mul(const Vector2f* vec1, float scalar)
{
    return Vector2f {
        .x = vec1->x * scalar,
        .y = vec1->y * scalar
    };
}

Vector2f vec2f_scal_div(const Vector2f* vec1, float scalar)
{
    return Vector2f {
        .x = vec1->x / scalar,
        .y = vec1->y / scalar
    };
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