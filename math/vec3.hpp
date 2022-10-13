#pragma once
#include <cmath>
#include <stdio.h>

// Structure that represents 3D vector in space, with (X, Y, Z) components
struct Vec3 {
  // Components
  float x, y, z;

  // Default constructor is zero-initialized
  inline Vec3() : x(0), y(0), z(0){};

  // Constructs a vector with a single value for each component
  explicit inline Vec3(float value) : x{value}, y{value}, z{value} {}

  // Constructs a vector with initial value for each component
  explicit inline Vec3(float X, float Y, float Z) : x{X}, y{Y}, z{Z} {}

  // Constructs a vector from other vector
  inline Vec3(const Vec3 &vec) : x{vec.x}, y{vec.y}, z{vec.z} {}

  // Constructs a vector by assignment
  inline Vec3 &operator=(const Vec3 &vec) {
    if (this == &vec)
      return *this;

    x = vec.x;
    y = vec.y;
    z = vec.z;

    return *this;
  };

  // Static Methods
  static const Vec3 Zero() { return Vec3(0, 0, 0); }

  static const Vec3 Unit() { return Vec3(1, 1, 1); }

  static const Vec3 Up() { return Vec3(0, 1, 0); }

  static const Vec3 Down() { return Vec3(0, -1, 0); }

  static const Vec3 Right() { return Vec3(1, 0, 0); }

  static const Vec3 Left() { return Vec3(-1, 0, 0); }

  static const Vec3 Foward() { return Vec3(0, 0, 1); }

  static const Vec3 Backward() { return Vec3(0, 0, -1); }

  static float DotProduct();

  static Vec3 CrossProduct();

  static Vec3 RotateVector();

  // Arithmetic Operators
  Vec3 operator-() const;

  Vec3 operator+(float value);

  Vec3 operator-(float value);

  Vec3 operator*(float value);

  Vec3 operator/(float value);

  Vec3 operator+=(float value);

  Vec3 operator-=(float value);

  Vec3 operator*=(float value);

  Vec3 operator/=(float value);

  Vec3 operator+(const Vec3 &vec);

  Vec3 operator-(const Vec3 &vec);

  // Comparison Operators
  bool operator==(const Vec3 &vec) const;

  bool operator!=(const Vec3 &vec) const;

  bool operator<(const Vec3 &vec) const;

  bool operator>(const Vec3 &vec) const;

  bool operator<=(const Vec3 &vec) const;

  bool operator>=(const Vec3 &vec) const;

  // Member Methods

  float Dot();

  Vec3 Cross();

  bool Normalize();

  float Length();

  Vec3 Rotate();

  void ToString();
};