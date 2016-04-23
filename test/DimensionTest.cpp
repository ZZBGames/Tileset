/**
 * \file DimensionTest.cpp
 * \brief Dimension unit test
 * \author Mathieu BAGUE
 * \date 10/04/2016
 */

#include <gtest/gtest.h>

#include <zzbgames/tileset/Dimension.hpp>

namespace zzbgames
{

namespace tileset
{

bool operator==(const Dimension& dimension1, const Dimension& dimension2)
{
    return ((dimension1.getWidth() == dimension2.getWidth()) &&
            (dimension1.getHeight() == dimension2.getHeight()));
}

TEST(DimensionTest, Constructor)
{
    Dimension dimension1;
    ASSERT_EQ(Dimension(0, 0), dimension1);

    Dimension dimension2(1, 2);
    ASSERT_EQ(1, dimension2.getWidth());
    ASSERT_EQ(2, dimension2.getHeight());

    Dimension dimension3(dimension2);
    ASSERT_EQ(1, dimension3.getWidth());
    ASSERT_EQ(2, dimension3.getHeight());
}

TEST(DimensionTest, Setters)
{
    Dimension dimension;
    dimension.setWidth(1).setHeight(2);
    ASSERT_EQ(Dimension(1, 2), dimension);
}

}

}
