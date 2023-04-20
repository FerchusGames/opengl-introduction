#include "vector2.h"

#include <cmath>

vector2::vector2(const float& _x, const float& _y)
{
	x = _x;
	y = _y;
}

float vector2::dot_product(const vector2& vector1, const vector2& vector2) 
{
	return ((vector1.x * vector2.x) + (vector1.y * vector2.y));
}

vector2 vector2::normalized() const
{
	const float magnitude = static_cast<float>(sqrt(pow(x, 2) + pow(y, 2)));  // NOLINT(modernize-use-auto)

	return {x / magnitude, y / magnitude};
}

const vector2 vector2::zero(0, 0);
const vector2 vector2::right(1, 0);
const vector2 vector2::left(-1, 0);
const vector2 vector2::up(0, 1);
const vector2 vector2::down(0, -1);