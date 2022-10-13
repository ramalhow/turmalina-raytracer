#include "vec3.hpp"

/*
 * Arithmetic Operators
 */

Vec3 Vec3::operator-() const 
{ 
    return Vec3(-x, -y, -z); 
}

Vec3 Vec3::operator+(float value) 
{
  return Vec3(x + value, y + value, z + value);
}

Vec3 Vec3::operator-(float value) 
{
  return Vec3(x - value, y - value, z - value);
}

Vec3 Vec3::operator*(float value) 
{
  return Vec3(x * value, y * value, z * value);
}

Vec3 Vec3::operator/(float value) 
{
  return Vec3(x / value, y / value, z / value);
}

Vec3 Vec3::operator+=(float value) 
{
  return Vec3(x += value, y += value, z += value);
}

Vec3 Vec3::operator-=(float value) 
{
  return Vec3(x -= value, y -= value, z -= value);
}

Vec3 Vec3::operator*=(float value) 
{
  return Vec3(x *= value, y *= value, z *= value);
}

Vec3 Vec3::operator/=(float value) 
{
  return Vec3(x /= value, y /= value, z /= value);
}

/*
 * Comparision Operators
 */

bool Vec3::operator==(const Vec3 &vec) const 
{
  return (x == vec.x) && (y == vec.y) && (z == vec.z);
}

bool Vec3::operator!=(const Vec3 &vec) const 
{
  return (x != vec.x) && (y != vec.y) && (z != vec.z);
}

bool Vec3::operator<(const Vec3 &vec) const 
{
  return (x < vec.x) && (y < vec.y) && (z < vec.z);
}

bool Vec3::operator>(const Vec3 &vec) const 
{
  return (x > vec.x) && (y > vec.y) && (z > vec.z);
}

bool Vec3::operator<=(const Vec3 &vec) const 
{
  return (x <= vec.x) && (y <= vec.y) && (z <= vec.z);
}

bool Vec3::Vec3::operator>=(const Vec3 &vec) const 
{
  return (x >= vec.x) && (y >= vec.y) && (z >= vec.z);
}
