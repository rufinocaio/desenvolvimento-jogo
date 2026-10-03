#include "../archives/Collision2D.hpp"

bool AABB::intersects(const AABB& other) const noexcept {
    return min.x <= other.max.x && other.min.x <= max.x
        && min.y <= other.max.y && other.min.y <= max.y;
}

AABB Collision2D::bounds(const Vector2D& position) const noexcept {
    return AABB{position - halfExtents, position + halfExtents};
}
