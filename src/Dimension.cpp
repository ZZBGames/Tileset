/**
 * \file Dimension.cpp
 * \author Mathieu BAGUE
 * \date 10/04/2016
 */

#include <zzbgames/tileset/Dimension.hpp>

namespace zzbgames
{

namespace tileset
{

Dimension::Dimension()
    : Dimension(0, 0)
{
}

Dimension::Dimension(unsigned long width, unsigned long height)
    : m_height(height),
      m_width(width)
{
}

unsigned long Dimension::getHeight() const
{
    return m_height;
}

unsigned long Dimension::getWidth() const
{
    return m_width;
}

}

}
