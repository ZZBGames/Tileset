/**
 * \file Insets.cpp
 * \author Mathieu BAGUE
 * \date 10/04/2016
 */

#include <zzbgames/tileset/Insets.hpp>

namespace zzbgames
{

namespace tileset
{

Insets::Insets()
    : Insets(0, 0, 0, 0)
{
}

Insets::Insets(unsigned long top, unsigned long left, unsigned long bottom, unsigned long right)
    : m_bottom(bottom),
      m_left(left),
      m_right(right),
      m_top(top)
{
}

unsigned long Insets::getBottom() const
{
    return m_bottom;
}

unsigned long Insets::getLeft() const
{
    return m_left;
}

unsigned long Insets::getRight() const
{
    return m_right;
}

unsigned long Insets::getTop() const
{
    return m_top;
}

}

}
