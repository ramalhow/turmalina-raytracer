#pragma once

// Structure that represents 3D vector in space, with (X, Y, Z) components
struct Vec3 {
  float x, y, z;

  inline Vec3() : x(0), y(0), z(0){};

  // Constructs a vector with a single value for each component
  explicit inline Vec3(float value) : x{value}, y{value}, z{value} {}

  // Constructs a vector with initial value for each component
  explicit inline Vec3(float X, float Y, float Z) : x{X}, y{Y}, z{Z} {}

  // Constructs a vector from other vector
  inline Vec3(const Vec3 &vec) : x{vec.x}, y{vec.y}, z{vec.z} {}

  // Constructs a vector by assignment
  Vec3 operator=(const Vec3 &vec);

  // Arithmetic Operators
  Vec3 operator-() const;

  Vec3 operator+(float value) const;

  Vec3 operator-(float value) const;

  Vec3 operator*(float value) const;

  Vec3 operator/(float value) const;

  Vec3 operator+(const Vec3 &vec) const;

  Vec3 operator-(const Vec3 &vec) const;

  // Comparison Operators
  bool operator==(const Vec3 &vec) const;

  bool operator!=(const Vec3 &vec) const;

  bool operator<(const Vec3 &vec) const;

  bool operator>(const Vec3 &vec) const;

  bool operator<=(const Vec3 &vec) const;

  bool operator>=(const Vec3 &vec) const;

  // Member Methods

  double LengthSquared() const;

  double Length() const;

  void ToString() const;

  // Static Methods
  static Vec3 Zero() { return Vec3(0, 0, 0); }

  static Vec3 One() { return Vec3(1, 1, 1); }

  static Vec3 Up() { return Vec3(0, 1, 0); }

  static Vec3 Down() { return Vec3(0, -1, 0); }

  static Vec3 Right() { return Vec3(1, 0, 0); }

  static Vec3 Left() { return Vec3(-1, 0, 0); }

  static Vec3 Foward() { return Vec3(0, 0, 1); }

  static Vec3 Backward() { return Vec3(0, 0, -1); }
};

Vec3 Normalize(const Vec3& vec);

float Dot(const Vec3 &v1, const Vec3 &v2);

Vec3 Cross(const Vec3 &v1, const Vec3 &v2);