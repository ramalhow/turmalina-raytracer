#include "vec3.hpp"

#include <math.h>
#include <stdio.h>

/*
 * Arithmetic Operators
 */

Vec3 Vec3::operator-() const { return Vec3(-x, -y, -z); }

Vec3 Vec3::operator+(float value) const {
  return Vec3(x + value, y + value, z + value);
}

Vec3 Vec3::operator-(float value) const {
  return Vec3(x - value, y - value, z - value);
}

Vec3 Vec3::operator*(float value) const {
  return Vec3(x * value, y * value, z * value);
}

Vec3 Vec3::operator/(float value) const {
  return Vec3(x / value, y / value, z / value);
}

/*
 * Comparision Operators
 */

bool Vec3::operator==(const Vec3 &vec) const {
  return (x == vec.x) && (y == vec.y) && (z == vec.z);
}

bool Vec3::operator!=(const Vec3 &vec) const {
  return (x != vec.x) && (y != vec.y) && (z != vec.z);
}

bool Vec3::operator<(const Vec3 &vec) const {
  return (x < vec.x) && (y < vec.y) && (z < vec.z);
}

bool Vec3::operator>(const Vec3 &vec) const {
  return (x > vec.x) && (y > vec.y) && (z > vec.z);
}

bool Vec3::operator<=(const Vec3 &vec) const {
  return (x <= vec.x) && (y <= vec.y) && (z <= vec.z);
}

bool Vec3::operator>=(const Vec3 &vec) const {
  return (x >= vec.x) && (y >= vec.y) && (z >= vec.z);
}

/*
 * Main Operations
 */

Vec3 Normalize(const Vec3& vec) {
  return vec / vec.Length();
};

float Dot(const Vec3 &v1, const Vec3 &v2) {
  return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
};

Vec3 Cross(const Vec3 &v1, const Vec3 &v2) {
  return Vec3(v1.y * v2.z - v1.z * v2.x, v1.z * v2.x - v1.x * v2.z,
              v1.x * v2.y - v1.y * v2.x);
};

/*
 * Member Functions
 */

double Vec3::LengthSquared() const {
  return (x * x) + (y * y) + (z * z);
};

double Vec3::Length() const {
  return sqrt(LengthSquared());
};


void Vec3::ToString() const {
  printf("{ x: %f , y: %f, z: %f } \n", this->x, this->y, this->z);
};